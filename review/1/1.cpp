#include <iostream>

using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator = 0, int denominator = 1)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    Fraction operator+(const Fraction &f)
    {
        Fraction temp;
        temp.numerator = this->numerator * f.denominator + this->denominator * f.numerator;
        temp.denominator = this->denominator * f.denominator;
        return temp;
    }

    operator double()
    {
        return (double)this->numerator / this->denominator;
    }

    friend ostream &operator<<(ostream &out, const Fraction &f)
    {
        out << f.numerator << "/" << f.denominator;
        return out;
    }
};

int main()
{
    Fraction R1(1, 2), R2(2, 3), R3;
    R3 = R1 + R2;
    double number = R3;
    cout << R3 << endl;
    cout << number << endl;
    return 0;
}