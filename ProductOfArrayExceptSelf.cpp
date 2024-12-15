#include <iostream>
#include<vector>
using namespace std;

vector<int> ArrayProduct(vector<int> arr)
{
    int product = 1;
    vector<int> ans;

    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr.size(); i++)
        {
            if(i != j)
            {
                product *= arr[j];
            }
        }
         ans.push_back(product);
         product = 1;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1,2,3,4};

    ArrayProduct(arr);

}