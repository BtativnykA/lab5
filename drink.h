#pragma once
#include <iostream>
#include <string>
using namespace std;

// 🔹 Базовий клас
class Drink {
protected:
    string name;
    string temperature;

public:
    Drink();
    virtual ~Drink();

    void SetName(string n);
    void SetTemperature(string t);
    virtual void Describe();
};

// 🔹 Похідні класи (всі — ВІРТУАЛЬНО від Drink)
class Juice : virtual public Drink {
public:
    Juice();
    virtual ~Juice();
    void Describe() override;
};

class Soda : virtual public Drink {
public:
    Soda();
    virtual ~Soda();
    void Describe() override;
};

class FreshJuice : virtual public Drink {
protected:
    string fruit;

public:
    FreshJuice(string f);
    FreshJuice();
    virtual ~FreshJuice();
    void SetFruit(string f);
    void Describe() override;
};

// 🔹 Клас із множинним наслідуванням
class MultiJuice : public Juice, public Soda, public FreshJuice {
private:
    string mixLabel;

public:
    MultiJuice(string fruit, string label);
    virtual ~MultiJuice();
    void Describe() override;
};