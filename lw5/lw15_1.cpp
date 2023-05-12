#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL , "ru");
    string str_1, str_2, str_3;

    cout << "¬ведите первую строку: ";
    cin >> str_1;

    cout << "¬ведите вторую строку: ";
    cin >> str_2;

    str_3 = str_1 + str_2;

    cout << "–езультат конкатенации: " << str_3 << endl;

    return 0;
}
