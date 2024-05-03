# include <iostream>
using namespace std;

#include <iostream>

using namespace std;

class Test
{
public:
    int add();
    int add(int a);
    int add(int a, int b);
    int add(int a, int b, int c);
};
int Test::add()
{
    return 0;
}
int Test::add(int a)
{
    return a;
}
int Test::add(int a, int b)
{
    return a + b;
}
int Test::add(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    Test obj;
    cout << obj.add() << endl;
    cout << obj.add(1) << endl;
    cout << obj.add(1, 2) << endl;
    cout << obj.add(1, 2, 3) << endl;
    return 0;
}
