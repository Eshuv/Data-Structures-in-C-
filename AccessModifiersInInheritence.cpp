#include <bits/stdc++.h>
using namespace std;

class A
{
    public:
    int a = 10;
    protected:
    int b = 20;
    private:
    int c = 30;
};

class B : public A
{
    // a is public.
    // b is protected.
    // c is not accessable in B.
};

class C : protected A
{
    // a is protected.
    // b is protected.
    // c is not accessible from C.
};

class D : private A // 'private' is default for classes 
{ 
    // a is private 
    // b is private 
    // c is not accessible from D 
}; 

int main()
{

}