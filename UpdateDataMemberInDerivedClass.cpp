#include<bits/stdc++.h>
using namespace std;

class Base
{
    protected:
    int publicVar;

    void display()
    {
        cout << "Value of publicVar -> " << publicVar << endl;
    }
};

class Derived : protected Base
{
    public:
    void displayMember()
    {
        display();
    }
    void modifyMember(int var)
    {
        publicVar = var;
    }
};

int main()
{
    Derived inst;

    inst.modifyMember(50);
    inst.displayMember();

    inst.modifyMember(100);
    inst.displayMember();
}