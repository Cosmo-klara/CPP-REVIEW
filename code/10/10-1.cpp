#include <iostream>
using namespace std;

char oneChar(const char *charArray = 0)
{
    static const char *s;
    if (charArray)
    {
        s = charArray;
        return *s;
    }
    // 字符串末尾跳出，返回 0 值
    if (*s == '\0')
        return 0;
    return *s++;
}

char *a = "abcdefghijklmnopqrstuvwxyz";

int main()
{
    oneChar(a); // Initializes s to a
    char c;
    while ((c = oneChar()) != 0)
        cout << c << endl;
}