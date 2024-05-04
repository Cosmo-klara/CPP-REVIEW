#include <iostream>

using namespace std;

class Mammal
{
public:
    virtual void Speak() const
    {
        cout << "speak\n";
    }
};

class Dog : public Mammal
{
public:
    void Speak() const override
    {
        cout << "bark\n";
    }
};

class Pug : public Dog
{
public:
    void Speak() const override
    {
        cout << "pug bark \n";
    }
};

void Talk(const Mammal &mammal)
{
    mammal.Speak();
}

int main()
{
    Mammal mammal;
    Dog dog;
    Pug pug;

    Talk(mammal);
    Talk(dog);
    Talk(pug);

    return 0;
}