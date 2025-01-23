#include <bits/stdc++.h>
using namespace std;

class Base
{
    public: 
    virtual void print()
    {
        cout << "Hello I am abhay in Base class." << endl;
    }
};

class Derived : public Base
{
    void print()
    {
        cout << "Hello I am abhay in Derived class." << endl;
    }
};

class SecondChild : public Base
{
    void print()
    {
        cout << "Hello I am abhay in SecondChild class." << endl;
    }
};

int main()
{
    Base* inst;
    Base instBase;
    Derived instchild;
    SecondChild instSecondChild;

    inst = &instBase;    
    inst->print();

    inst = &instchild;
    inst->print();

    inst = &instSecondChild;
    inst->print();
}