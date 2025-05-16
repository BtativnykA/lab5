#include "drink.h"

// --- Drink ---
Drink::Drink() {
    cout << "[Drink] Створено базовий напій" << endl;
}
Drink::~Drink() {
    cout << "[Drink] Знищено базовий напій" << endl;
}
void Drink::SetName(string n) { name = n; }
void Drink::SetTemperature(string t) { temperature = t; }
void Drink::Describe() {
    cout << "Це просто якийсь напій..." << endl;
}

// --- Juice ---
Juice::Juice() {
    SetName("Сік");
    SetTemperature("холодний");
    cout << "[Juice] Створено сік" << endl;
}
Juice::~Juice() {
    cout << "[Juice] Сік знищено" << endl;
}
void Juice::Describe() {
    cout << "Це сік" << endl;
}

// --- Soda ---
Soda::Soda() {
    SetName("Кола");
    SetTemperature("дуже холодна");
    cout << "[Soda] Створено газовану воду" << endl;
}
Soda::~Soda() {
    cout << "[Soda] Газована вода знищена" << endl;
}
void Soda::Describe() {
    cout << "Це газована вода" << endl;
}

// --- FreshJuice ---
FreshJuice::FreshJuice(string f) {
    SetFruit(f);
    cout << "[FreshJuice] Створено фреш зі смаком " << fruit << endl;
}
FreshJuice::FreshJuice() {
    cout << "[FreshJuice] Порожній фреш створено" << endl;
}
FreshJuice::~FreshJuice() {
    cout << "[FreshJuice] Фреш знищено" << endl;
}
void FreshJuice::SetFruit(string f) {
    fruit = f;
}
void FreshJuice::Describe() {
    cout << "Це фреш з " << fruit << endl;
}

// --- MultiJuice ---
MultiJuice::MultiJuice(string fruit, string label)
    : Drink(), Juice(), Soda(), FreshJuice(fruit) {
    mixLabel = label;
    cout << "[MultiJuice] Створено мікс: " << mixLabel << endl;
}
MultiJuice::~MultiJuice() {
    cout << "[MultiJuice] Мікс '" << mixLabel << "' знищено" << endl;
}
void MultiJuice::Describe() {
    cout << "Це мікс '" << mixLabel << "' — сік, фреш з " << fruit << " і газована вода!" << endl;
}