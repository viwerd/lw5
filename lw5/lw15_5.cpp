#include <iostream>
#include <algorithm>

using namespace std;

string reverseString(string str)
{
    reverse(str.begin(), str.end()); // begin � ����� ��������� � ������ �� ����� ������ ������ ������
    return str;
}

int main()
{
    setlocale(LC_ALL , "ru");
    string str;
    cout << "������� ������: "<< endl;
    getline(cin , str);
    string reversed = reverseString(str);
    cout << "��������������� ������: " << reversed << endl;
    return 0;
}
