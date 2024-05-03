#ifndef STACKOFINT_H
#define STACKOFINT_H

class StackOfInt
{

public:
    StackOfInt();
    void push(int n);
    void pop();
    int top();
    bool isEmpty();

private:
    class CheshireCat;
    CheshireCat *smileCat;
};

#endif