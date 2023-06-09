#include <iostream>
#include <string>

using namespace std;

string longestCommonSubstring(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();
    int maxLen = 0;
    int endIndex = -1; 
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            int len = 0;
            while (i + len < len1 and j + len < len2 and s1[i + len] == s2[j + len])
            {
                len++;
            }
            if (len > maxLen)
            {
                maxLen = len;
                endIndex = i;
            }
        }
    }
    return s1.substr(endIndex, maxLen);
}

int main()
{
    system("chcp 1251");
    system("cls");

    string str1, str2;

    cout << "Введите первую строку: ";
    cin >> str1;

    cout << "Введите вторую строку: ";
    cin >> str2;

    cout << "Наибольшая общая подстрока - " << longestCommonSubstring(str1, str2) << endl;
    return 0;
}
