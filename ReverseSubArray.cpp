#include <iostream>
#include <vector>
using namespace std;

void reverseSubArray(int *arr, int l, int r) {
        // code here
        while(l <= r)
        {
            int temp = arr[l-1];
            arr[l-1] = arr[r-1];
            arr[r-1] = temp;
            
            l++;
            r--;
        }
    }

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int sz = sizeof(arr)/ sizeof(arr[0]);
    int l = 2;
    int r = 4;

    reverseSubArray(arr, l, r);

    for(int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
}