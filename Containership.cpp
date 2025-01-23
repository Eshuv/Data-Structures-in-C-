#include <bits/stdc++.h>
using namespace std;

class Base
{
    int a;
    int b;

    public:
    Base(int a, int b)
    {
        this->a = a;
        this->b = b;
        cout << "I am in Base class" << endl;
    }    
};

class ContainerClass
{
    int a;
    int b;

    public:
    ContainerClass() : a(20), b(30), inst(a, b)
    {
        cout << "I am in ContainerClass" << endl;
    }

    Base inst;
};
int main()
{
    ContainerClass inst;
}