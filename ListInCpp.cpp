#include <bits/stdc++.h>
using namespace std;

void Print(list<int> fl)
{
    for(auto i : fl)
    {
        cout << i << " ";
    }
    cout << endl;
}


int main()
{
    list<int> li({10, 20, 30});
    list<int> li2;

    //li.assign(5, 10); // Removes the privious data and intialize the list with the new data.
    li.push_back(50);
    li.push_front(60);

    Print(li);

    //li.sort();

    //Print(li);

    li2.assign(li.rbegin(), li.rend());

    Print(li2);
}