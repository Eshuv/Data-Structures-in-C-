#include <bits/stdc++.h>
using namespace std;

class Complex
{
    private:
    int real;
    int imag;

    public:
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    Complex() : real(0), imag(0) {}

    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;

        return res;
    }

    bool operator==(Complex const& obj)
    {
        return real == obj.real && imag == obj.imag;
    }

    void print()
    {
        cout << real << " + i" << imag << endl;
    }
};

int main()
{
    Complex inst1(5,6), inst2(5,6);

    Complex inst3 = inst1 + inst2;

    inst3.print();

    if(inst1 == inst2)
    {
        cout << "Both complex numbers are EQUAL." << endl;
    }
    else
    {
        cout << "Both complex numbers are NOT EQUAL." << endl;
    }
}