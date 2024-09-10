#include <iostream>
using namespace std;

bool binarySearch(int *arr, int sz, int key)
{
    int left = 0;
    int right = sz-1;

    while(left <= right)
    {
        int mid = (left+right)/2;

        if(arr[mid] == key)
        {
            return true;
        }
        else if(arr[mid] > key)
        {
            right = mid-1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return false;
}

void Print(int *arr, int sz)
{
    for(int i = 0; i < sz; i++)
    {
        cout << arr[i] << " " ;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int sz = sizeof(arr)/ sizeof(arr[0]);

    bool ret = binarySearch(arr, sz, 6);

    cout << ret;

    //Print(arr, sz);
}