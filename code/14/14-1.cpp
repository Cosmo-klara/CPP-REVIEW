# include <iostream>
using namespace std;

class A {
    int a;
public:
    A (int x) : a(x) {}
    void funA(){
        cout << a << endl;
    } 
};

class B {
    int b;
    A a;
public:
    B (int x, int y) : b(x), a(y) {}
    void funB(){
        cout << b << endl;
        a.funA(); //需要显式调用 funA() 依旧是 a 的成员函数，其实就是嵌套了一层
    }
};

class C : public A {
    int c;
public:
    C (int x, int y) : c(x), A(y) {}
    void funC(){
        cout << c << endl;
    }
    void funA(){
        cout << "C::funA()" << endl;
    }
};

// 继承中，相当于隐藏声明定义于继承的基类中

int main(){
    B b(10, 20);
    b.funB();
    // b.a.funA(); error 不可访问
    C c(30, 40);
    c.funC();
    c.funA(); // funA() 可以在 C 中重写
    c.A::funA(); // 这样可以上行到基类中的函数
    return 0;
}