#include "StackOfInt.h"
using namespace std;
const int SIZE = 10;

struct StackOfInt::CheshireCat
{
    int topindex = -1;
    int data[SIZE];
};

StackOfInt::StackOfInt()
{
    smileCat = new CheshireCat;
}

void StackOfInt::push(int n)
{
    smileCat->topindex++;
    smileCat->data[smileCat->topindex] = n;
    return;
}

void StackOfInt::pop()
{
    smileCat->topindex--;
    return;
}

int StackOfInt::top()
{
    return smileCat->data[smileCat->topindex];
}

bool StackOfInt::isEmpty()
{
    return smileCat->topindex == -1;
}