#include <iostream>
using namespace std;

bool linearSearch(int *arr, int sz, int key)
{
    for(int i = 0; i < sz; i++)
    {
        if(arr[i] == key)
        {
            return true;
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
    int arr[] = {5,4,3,2,1};
    int sz = sizeof(arr)/ sizeof(arr[0]);

    bool ret = linearSearch(arr, sz, 6);

    cout << ret ;

    //Print(arr, sz);
}