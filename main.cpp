#include "drink.h"

int main() {
    cout << "--- Створення MultiJuice ---" << endl;

    // Створення об'єкта міксу: комбінація соків, фрешу і газованої
    MultiJuice mj("манго", "Манго-Бум");

    // Виводимо опис
    mj.Describe();

    cout << "\n--- Кінець програми ---" << endl;
    return 0;
}