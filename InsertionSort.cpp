#include <iostream>
using namespace std;

void insertionSort(int *arr, int sz)
{
    for (int i = 1; i < sz; ++i) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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

    insertionSort(arr, sz);

    Print(arr, sz);
}