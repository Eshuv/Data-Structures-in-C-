#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(10);
    dq.push_front(20);
    dq.pop_back();
    dq.pop_front();
    long int size = dq.size();
    dq.shrink_to_fit();

    cout << dq.empty() << endl;

    cout << size << endl;

    for(auto i : dq)
    {
        cout << i << " ";
    }

}