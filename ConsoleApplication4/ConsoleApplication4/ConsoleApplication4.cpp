// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <vector>
using namespace std;

// Главная функция
int main() {
    setlocale(0, "");
    vector<string> russianWords = { "дом", "дорога", "машина", "телефон", "компьютер", "город", "учитель", "школа", "студент", "книга",
                                   "дерево", "фабрика", "кафедра", "магазин", "заводы" };

    vector<string> englishWords = { "house", "road", "car", "phone", "computer","city", "teacher", "school", "student", "book",
                                   "tree", "factory", "department", "shop", "plants" };

    bool running = true;

    // Основной цикл программы
    while (running) {
        cout << "\n[ + ] Переводчик\n";
        cout << "[ 1 ] Русские слова\n";
        cout << "[ 2 ] Английские слова\n";
        cout << "[ 3 ] Выйти\n";

        string choice;
        cin >> choice;

        if (choice == "1") {
            // Меню русских слов
            for (size_t i = 0; i < russianWords.size(); ++i) {
                cout << "[" << i + 1 << "] " << russianWords[i] << endl;
            }

            size_t number;
            cout << "Выберите номер слова: ";
            cin >> number;

            if (number >= 1 && number <= russianWords.size()) {
                cout << "\n[ + ] Перевод: " << russianWords[number - 1] << " -> "
                    << englishWords[number - 1] << endl;
            }
            else {
                cout << "Ошибка: неверный номер слова." << endl;
            }
        }
        else if (choice == "2") {
            // Меню английских слов
            for (size_t i = 0; i < englishWords.size(); ++i) {
                cout << "[" << i + 1 << "] " << englishWords[i] << endl;
            }

            size_t number;
            cout << "Выберите номер слова: ";
            cin >> number;

            if (number >= 1 && number <= englishWords.size()) {
                cout << "\n[ + ] Перевод: " << englishWords[number - 1] << " -> "
                    << russianWords[number - 1] << endl;
            }
            else {
                cout << "Ошибка: неверный номер слова." << endl;
            }
        }
        else if (choice == "3") {
            running = false;
        }
        else {
            cout << "Ошибка: выберите правильный пункт меню." << endl;
        }
    }

    return 0;
}




