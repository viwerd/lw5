#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    string str;
    cout << "Введите сроку: ";
    getline(cin, str);

    transform(str.begin(), str.end(), str.begin(), ::toupper);

    cout << "Строка в верхнем регистре: " << str;

    return 0;
}
