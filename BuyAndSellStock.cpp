#include <bits/stdc++.h>
#include <vector>
using namespace std;

int maxProfit(vector<int> vec)
{
    int max = 0;
    for(int i = 0; i < vec.size() - 1; i++)
    {
        for(int j = i + 1; j < vec.size(); j++)
        {
            if(vec[j] > vec[i] && ((vec[j] - vec[i]) > max))
            {
                max = vec[j] - vec[i];
            }
        }
    }
    return max;
}

int main()
{
    vector<int> vec = {7,6,5,4,3,1};

    int res = maxProfit(vec);

    cout << res << endl;
}
