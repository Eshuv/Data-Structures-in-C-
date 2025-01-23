#include <iostream>
#include <vector>
using namespace std;

int KadanesAlgorithm(vector<int> &arr)
{
    int maxSum = 0;
    int currentSum = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        currentSum +=arr[i];
        maxSum = max(maxSum, currentSum);

        if(currentSum < 0)
        {
            currentSum = 0;
        }
    }
    return  maxSum;
}

int main()
{
    vector<int> vec = {2, 3, -8, 7, -1, 2, 3};
    int res = KadanesAlgorithm(vec);
    cout << res << endl;
}