#include <iostream>
#include <algorithm>

using namespace std;

string reverseString(string str)
{
    reverse(str.begin(), str.end()); // begin и ендом указываем с какого по какой символ делаем реверс
    return str;
}

int main()
{
    setlocale(LC_ALL , "ru");
    string str;
    cout << "Введите строку: "<< endl;
    getline(cin , str);
    string reversed = reverseString(str);
    cout << "Реверсированная строка: " << reversed << endl;
    return 0;
}
