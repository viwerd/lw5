#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL , "ru");
    string str_1, str_2, str_3;

    cout << "������� ������ ������: ";
    cin >> str_1;

    cout << "������� ������ ������: ";
    cin >> str_2;

    str_3 = str_1 + str_2;

    cout << "��������� ������������: " << str_3 << endl;

    return 0;
}
