#include <bits/stdc++.h>
using namespace std;

class Base
{
    private:
    int private_var;

    protected:
    int protected_var;

    public:
    Base(int a, int b)
    {
        private_var = a;
        protected_var = b;
    }

    friend class FriendClass;
};

class FriendClass
{
    public:
    void display(Base& inst)
    {
        cout << "Private variable of Base class : " << inst.private_var << endl;
        cout << "Protected variable of Base class : " << inst.protected_var << endl;
    }
};

int main()
{
    Base instBase(100, 200);
    FriendClass instFriend;

    instFriend.display(instBase);
}