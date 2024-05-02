#include <iostream>
using namespace std;

int main()
{
    short int a;
    int b;
    long int c;
    unsigned short int d;
    unsigned int e;
    unsigned long int f;

    cout << "short int: " << sizeof(a) << endl;
    cout << "int: " << sizeof(b) << endl;
    cout << "long int: " << sizeof(c) << endl;
    cout << "unsigned short int: " << sizeof(d) << endl;
    cout << "unsigned int: " << sizeof(e) << endl;
    cout << "unsigned long int: " << sizeof(f)<< endl;

    char g;
    unsigned char h;

    cout << "char: " << sizeof(g) << endl;
    cout << "unsigned char: " << sizeof(h) << endl;

    float i;
    double j;
    long double k;

    cout << "float: " << sizeof(i) << endl;
    cout << "double: " << sizeof(j) << endl;
    cout << "long double: " << sizeof(k) << endl;
}