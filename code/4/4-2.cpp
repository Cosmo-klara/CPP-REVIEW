#include <iostream>
using namespace std;

typedef struct CStashTag
{
    int size;     // 每个存储空间的大小（以字节为单位）
    int quantity; // 当前分配的存储空间数量
    int next;     // 下一个空闲的存储位置索引
    // Dynamically allocated 的字节数组，用来实际存放数据
    unsigned char *storage;
} CStash;

struct Stash
{
    int size;
    int quantity;
    int next;
    unsigned char *storage;

    void initialize(int size);
    void cleanup();
    int add(const void *element);
    void *fetch(int index);
    int count();
    void inflate(int increase);
};

struct A
{
    int i[100];
};

struct B
{
    void f();
};

void B::f() {}

int main()
{
    cout << "sizeof struct A = " << sizeof(A)
         << " bytes" << endl;
    cout << "sizeof struct B = " << sizeof(B)
         << " bytes" << endl;
    cout << "sizeof CStash in C = "
         << sizeof(CStash) << " bytes" << endl;
    cout << "sizeof Stash in C++ = "
         << sizeof(Stash) << " bytes" << endl;
}