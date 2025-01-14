#include<bits/stdc++.h>
using namespace std;

class Parent{
    int a = 10;

    public:
    void printData()
    {
        cout << "This is Parent Class -> " << a << endl;
    }
};

class Derived : public Parent
{
    int d = 20; 

    public:
    void printDerivedData()
    {
        cout << "This is Derived Class -> " << d << endl;
    }
};

int main()
{
    Derived inst;

    inst.printData();
    inst.printDerivedData();
}
