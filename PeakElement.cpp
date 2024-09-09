#include <iostream>
using namespace std;

int peakElement(int arr[], int n)
{
   // Your code here
   int peak = 0;
   for (int i = 0; i < n ; i++)
   {
       if((i > 0) && (i < n-1))
       {
           if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1])
           {
               peak = i;
           }
       }
       else if(i == 0)
       {
           if(arr[i] >= arr[i+1])
           {
               peak = i;
           }
       }
       else
       {
           if(arr[i] >= arr[i-1])
           {
               peak = i;
           }
       }
   }
   return peak;
}

int main()
{
    int arr[] = {1, 2, 3};
    int sz = sizeof(arr)/ sizeof(arr[0]);

    int ret = peakElement(arr, sz);
    cout << ret << endl;
}