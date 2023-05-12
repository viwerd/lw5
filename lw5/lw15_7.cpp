#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    string str;
    char ch;

    cout << "Введите строку ";
    getline(cin, str);

    cout << "Введите символ ";
    cin >> ch;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
        {
            str[i] = ' ';
        }
    }

    cout << "Строка с замененным символом " << str << endl;

    return 0;
}
