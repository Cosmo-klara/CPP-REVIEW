#include <iostream>
using namespace std;
class Data
{
public:
    int a, b, c;
    void print() const
    {
        cout << a << "," << b << "," << c << endl;
    }
};
int main()
{
    Data d;
    Data *dp = &d;
    
    int Data::*pmInt = &Data::a;

    dp->*pmInt = 47;
    pmInt = &Data::b;
    d.*pmInt = 48;
    pmInt = &Data::c;
    dp->*pmInt = 49;
    dp->print();
    return 0;
}