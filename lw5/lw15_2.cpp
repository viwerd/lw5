#include <iostream>
#include <string>

using namespace std;

int str_lenght(string str)
{
    return str.length();
}

int main()
{
    setlocale(LC_ALL , "ru");
    string str = "Hello, World!";
    cout << "Длина строки " << str << "-" << str_lenght(str) << endl;

    return 0;
}
