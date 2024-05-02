#include <iostream>
using namespace std;

void fun(int* a)
{
    cout << "a = " << *a << endl;
    *a = 10;
    cout << "a = " << *a << endl;
}

int main()
{
    int x = 1;
    cout << "x = " << x << endl;
    fun(&x);
    cout << "x = " << x << endl;
}