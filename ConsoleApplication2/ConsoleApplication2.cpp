#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

string reverse(string str) {
    reverse(str.begin(), str.end());
    return str;
}

string removeVowels(string str) {
    string vowels = "aeiouyAEIOUY";
    for (char c : vowels) {
        str.erase(remove(str.begin(), str.end(), c), str.end());
    }
    return str;
}

string removeConsonants(string str) {
    string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    for (char c : consonants) {
        str.erase(remove(str.begin(), str.end(), c), str.end());
    }
    return str;
}

string shuffle(string str) {
    random_shuffle(str.begin(), str.end());
    return str;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;
    string word;

    cout << "Введите слово: ";
    cin >> word;

    cout << "\nВыберите действие:\n";
    cout << "1. Слово выводится задом наперед.\n";
    cout << "2. Вывести слово без гласных.\n";
    cout << "3. Вывести слово без согласных.\n";
    cout << "4. Рандомно раскидывать буквы заданного слова.\n";
    cout << "Ваш выбор: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Результат: " << reverse(word) << endl;
        break;
    case 2:
        cout << "Результат: " << removeVowels(word) << endl;
        break;
    case 3:
        cout << "Результат: " << removeConsonants(word) << endl;
        break;
    case 4:
        srand(time(0));
        cout << "Результат: " << shuffle(word) << endl;
        break;
    default:
        cout << "Неверный выбор." << endl;
    }

    return 0;
}


