#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> Product(vector<int> vec)
{
    vector<int> res;
    int product = 1;
    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < vec.size(); j++)
        {
            if(i != j)
            {
                product *= vec[j];
            }
        }
        res.push_back(product);
        product = 1;
    }
    return res;
}

int main()
{
    vector<int> vec = {1,2,3,4};

    vector<int> res = Product(vec);

    for(auto i : res)
    {
        cout << i << " ";
    }
}

