#include <iostream>
//#include <string>
#include <algorithm> // https://learn.microsoft.com/ru-ru/cpp/standard-library/algorithm?view=msvc-170

using namespace std;

int main()
{
    setlocale(LC_ALL , "ru");
    string str1 , str2;
    cout << "������� ������ ������: ";
    getline(cin , str_1); // ������� getline ����� ������� � ����� � ����������� input()
    cout << "������� ������ ������: ";
    getline(cin , str_2);

    // ����������� ������ � ������ ������� � ��������� ������� , ��������� ���������� algorithm
    transform(str_1.begin(), str_1.end(), str_1.begin(), ::tolower); // .begin ������ �������� � �������� ���������� ���������� , .end �������������� ����� ,
    transform(str_2.begin(), str_2.end(), str_2.begin(), ::tolower);
    sort(str_1.begin(), str_1.end());
    sort(str_2.begin(), str_2.end());

    if (str_1 == str_2)
    {
        cout << "������ �������� �����������." << endl;
    }
    else {
        cout << "������ �� �������� �����������." << endl;
    }

    return 0;
}
