#include <iostream>
using namespace std;

class X
{
    int i;

public:
    X(int ii = 0) : i(ii) { cout << "X() " << i << endl; } // Default
    ~X() { cout << "~X() " << i << endl; }
};

void f()
{
    static X x1(47);
    static X x2; // Default constructor required
}

int main()
{
    f();
}