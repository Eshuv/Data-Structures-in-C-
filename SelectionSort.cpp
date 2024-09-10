#include <iostream>
using namespace std;

void selectionSort(int *arr, int sz)
{
    int min = 0;
    for(int i = 0; i < sz-1; i++)
    {
        min = i;
        for(int j = i+1; j < sz; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp; 
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

    selectionSort(arr, sz);

    Print(arr, sz);
}