#include <bits/stdc++.h>
using namespace std;

class Print
{
    public:
    virtual void print() = 0;
};

class PrintCircle : public Print
{
    public:
    void print() override
    {
        cout << "Printing a Circle" << endl;;
    }
};

class PrintSquare : public Print
{
    public:
    void print() override
    {
        cout << "Printing a Square" << endl;
    }
};

int main()
{
    Print* inst;
    inst = new PrintCircle();
    //PrintCircle instCircle;
   // PrintSquare instSquare;

    //inst = &instCircle;
    inst->print();

    delete inst;

    //inst = &instSquare;
    inst = new PrintSquare();
    inst->print();
}