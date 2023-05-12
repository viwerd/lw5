#include <iostream>
#include <string>

using namespace std;

string longestCommonSubstring(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();
    int maxLen = 0; // Длина наибольшей общей подстроки
    int endIndex = -1; // Индекс конца наибольшей общей подстроки в первой строке
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            int len = 0;
            while (i + len < len1 and j + len < len2 and s1[i + len] == s2[j + len])
            { // Пока символы равны и не вышли за границы строк
                len++; // Увеличиваем длину текущей общей подстроки
            }
            if (len > maxLen)
            { // Если текущая общая подстрока больше предыдущих
                maxLen = len; // Обновляем длину наибольшей общей подстроки
                endIndex = i; // Обновляем индекс конца наибольшей общей подстроки в первой строке
            }
        }
    }
    return s1.substr(endIndex, maxLen); // Возвращаем наибольшую общую подстроку
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
