#include<bits/stdc++.h>
using namespace std;

void Print(forward_list<int> fl)
{
    for(auto i : fl)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    forward_list<int> fl, f2, f3;
    fl.assign({1, 2, 3});
    f2.assign(5, 10);
    f3.assign(fl.begin(), fl.end());

    Print(fl);
    Print(f2);
    Print(f3);

    fl.push_front(40);
    fl.emplace_front(50);
    fl.emplace_after(3, 50);
}