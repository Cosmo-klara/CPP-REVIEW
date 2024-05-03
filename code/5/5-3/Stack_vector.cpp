#include <vector>
#include "StackOfInt.h"
using namespace std;

struct StackOfInt::CheshireCat
{
    vector<int> data;
};


StackOfInt::StackOfInt()
{
    smileCat = new CheshireCat;
}

void StackOfInt::push(int n)
{
    smileCat->data.push_back(n);
    return;
}

void StackOfInt::pop()
{
    smileCat->data.pop_back();
    return;
}

int StackOfInt::top()
{
    return smileCat->data[smileCat->data.size() - 1];
}

bool StackOfInt::isEmpty()
{
    return smileCat->data.size() == 0;
}