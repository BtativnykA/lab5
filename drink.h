#pragma once
#include <iostream>
#include <string>
using namespace std;

// Базовий клас, від якого успадковуються всі напої
class Drink {
protected:
    string name;         // Назва напою
    string temperature;  // Температура подачі

public:
    Drink();              // Конструктор
    virtual ~Drink();     // Віртуальний деструктор

    void SetName(string n);         // Задати назву
    void SetTemperature(string t);  // Задати температуру
    virtual void Describe();        // Метод для опису напою
};

// Клас Juice, який ВІРТУАЛЬНО наслідує Drink
class Juice : virtual public Drink {
public:
    Juice();               // Конструктор
    virtual ~Juice();      // Деструктор
    void Describe() override; // Перевизначення Describe()
};

// Клас Soda — теж віртуальне наслідування від Drink
class Soda : virtual public Drink {
public:
    Soda();
    virtual ~Soda();
    void Describe() override;
};

// Клас FreshJuice — фреш із фруктом, віртуальне наслідування
class FreshJuice : virtual public Drink {
protected:
    string fruit;  // Назва фрукта

public:
    FreshJuice(string f);   // Конструктор з параметром
    FreshJuice();           // Порожній конструктор
    virtual ~FreshJuice();  // Деструктор
    void SetFruit(string f);
    void Describe() override;
};

// Клас MultiJuice — мікс, який успадковує ВСІ ТРИ інші класи
class MultiJuice : public Juice, public Soda, public FreshJuice {
private:
    string mixLabel;  // Назва міксу

public:
    MultiJuice(string fruit, string label); // Конструктор
    virtual ~MultiJuice();                  // Деструктор
    void Describe() override;
};