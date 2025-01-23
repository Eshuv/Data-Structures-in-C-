#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> vec)
{
    bool flag = false;
    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = i+1; j < vec.size(); j++)
        {
            if(vec[i] == vec[j])
            {
                flag = true;
            }
        }
    }
    return flag;
}

int main()
{
    vector<int> vec = {1,2,3,4};

    cout << containsDuplicate(vec);
}