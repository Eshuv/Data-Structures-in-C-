#include <bits/stdc++.h>
using namespace std;

class EmptyClass
{};

class DataMemberClass
{
    int a;
    int b;
};

int main()
{
    cout << "Size of an empty class : " << sizeof(EmptyClass) << endl;
    cout << "Size of an DataMemberClass class : " << sizeof(DataMemberClass) << endl;
}