#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    string str;
    char ch;

    cout << "������� ������ ";
    getline(cin, str);

    cout << "������� ������ ";
    cin >> ch;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
        {
            str[i] = ' ';
        }
    }

    cout << "������ � ���������� �������� " << str << endl;

    return 0;
}
