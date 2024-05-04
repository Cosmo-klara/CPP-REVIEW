#include <iostream>

using namespace std;

class DoublePtr
{
private:
    double *ptr;

public:
    DoublePtr(double value)
    {
        ptr = new double(value);
    }

    ~DoublePtr()
    {
        cout << "ptr->value: " << *ptr << endl;
        *ptr = -1;
        delete ptr;
        ptr = nullptr;
    }
    // 拷贝构造函数(深拷贝)
    DoublePtr(const DoublePtr &other)
    {
        ptr = new double(*other.ptr);
    }
};

void ByValue(DoublePtr obj1)
{
    DoublePtr obj2 = obj1;
}

int main()
{
    DoublePtr obj(3.14);
    ByValue(obj);
    return 0;
}