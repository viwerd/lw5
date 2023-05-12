#include <iostream>
//#include <string>
#include <algorithm> // https://learn.microsoft.com/ru-ru/cpp/standard-library/algorithm?view=msvc-170

using namespace std;

int main()
{
    setlocale(LC_ALL , "ru");
    string str1 , str2;
    cout << "Введите первую строку: ";
    getline(cin , str_1); // Функция getline очень полезна и схожа с питоновским input()
    cout << "Введите вторую строку: ";
    getline(cin , str_2);

    // Преобразуем строки в нижний регистр и сортируем символы , используя библиотеку algorithm
    transform(str_1.begin(), str_1.end(), str_1.begin(), ::tolower); // .begin начало элемента с которого начинается сортировка , .end соответственно конец ,
    transform(str_2.begin(), str_2.end(), str_2.begin(), ::tolower);
    sort(str_1.begin(), str_1.end());
    sort(str_2.begin(), str_2.end());

    if (str_1 == str_2)
    {
        cout << "Строки являются анаграммами." << endl;
    }
    else {
        cout << "Строки не являются анаграммами." << endl;
    }

    return 0;
}
