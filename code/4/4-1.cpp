int a;
void f() {}

struct S
{
    int a;
    void f();
};

void S::f()
{
    ::f();
    ::a++; // 选择全局变量 a 
    a--;   // 结构局域的变量 a
}
int main()
{
    S s;
    f();
}