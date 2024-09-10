#include <iostream>
using namespace std;

void bubbleSort(int *arr,int sz)
{
    for(int i = 0; i < sz; i++)
    {
        for(int j = 0; j < sz; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
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

    bubbleSort(arr, sz);

    Print(arr, sz);
}