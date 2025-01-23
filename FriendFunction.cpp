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

    friend void FriendFunction(Base& inst);
};

void FriendFunction(Base& inst)
{
    cout << "Private Variable of the Base Class : " << inst.private_var << endl;
    cout << "Protected Variable of the Base Class : " << inst.protected_var << endl;
}

int main()
{
    Base inst(100, 200);

    FriendFunction(inst);
}