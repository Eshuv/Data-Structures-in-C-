#include <bits/stdc++.h>
using namespace std;

class A
{
    public:
    int a;
};

class B : virtual public A
{
    public:
    int b;
};

class C : virtual public A
{
    public:
    int c;
};

class D : public B, public C
{
    public:
    int d;
};

int main()
{
    D inst;
    inst.a = 100;
    inst.b = 200;
    inst.c = 300;
    inst.d = 400;

    cout << inst.a << endl;
    cout << inst.b << endl;
    cout << inst.c << endl;
    cout << inst.d << endl;
}