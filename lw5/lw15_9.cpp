#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    string str;
    bool palindroms = true;
    cout << "������� ������ ";
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
        cout << "�������� ������ - ���������" << endl;
    }
    else {
        cout << "�������� ������ �� �������� �����������" << endl;
    }

    return 0;
}
