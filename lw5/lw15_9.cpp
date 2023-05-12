#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    string str;
    bool palindroms = true;
    cout << "Введите строку ";
    getline(cin, str);

    int i = 0, j = str.length() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            palindroms = false;
            break;
        }
        i++;
        j--;
    }
    if (palindroms)
    {
        cout << "Заданная строка - палиндром" << endl;
    }
    else {
        cout << "Заданная строка не является палиндромом" << endl;
    }

    return 0;
}
