#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    string str;
    char ch;
    int k = 0;

    cout << "������� ������: ";
    getline(cin, str);

    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] == ' ' or i == str.length())
        {
            k++;
        }
    }
    cout << "����������� ���� � ������: " << k  << endl;
    return 0;
}
