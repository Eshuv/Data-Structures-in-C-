#include <bits/stdc++.h>
using namespace std;

int maximumProduct(vector<int> vec)
{
    vector<int> res;
    int maxProduct = 1;
    int currentProduct = 1;
    for(int i = 0; i < vec.size(); i++)
    {
        int temp = max(vec[i], vec[i]*currentProduct);

        currentProduct = temp;
        maxProduct = max(maxProduct, currentProduct);
    }
    return maxProduct;
}

int main()
{
    vector<int> vec = {2,3,-2,4,5};

    int res = maximumProduct(vec);

    cout << res;
}