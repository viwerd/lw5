#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL , "ru");
    string str;
    char ch;
    cout << "Input string: ";
    getline(cin, str);

    cout << "Input symbol: ";
    cin >> ch;
    int index = str.find(ch); // index определяет вектор индекса.
    if (index != string::npos)
    {
        cout << "Index first input of symbol - " << ch << " in string: " << str << " by number "<< index << endl;
    }
    else
    {
        cout << "Symbol - " << ch << " wasn`t found in string: " << str << endl;
    }
    return 0;
}
