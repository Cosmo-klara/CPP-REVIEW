# include <iostream>
using namespace std;

void fun(){
    cout<<"Hello World"<<endl;
}
int main()
{
    void (*ptr)();
    ptr=fun;
    // 直接解引用调用
    (*ptr)();
    void (*ptr1)() = fun;
    ptr1();
}