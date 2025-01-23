#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> vec, int target)
{
    vector<int> res;
    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = i; j < vec.size(); j++)
        {
            if(target == (vec[i] + vec[j]))
            {
                res.push_back(i);
                res.push_back(j);
                return res;
            }
        }
    }
    return res;
}

int main()
{
    vector<int> vec = {1,2,3,4,5};

    vector<int> res = twoSum(vec, 5);

    for(auto i : res)
    {
        cout << i << " ";
    }

}