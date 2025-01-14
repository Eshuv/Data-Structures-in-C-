#include<bits/stdc++.h>
using namespace std;

int sumOfNumbers(string str)
{
    int sum = 0;
    int temp = 0;
    for(int i = 0; i < str.length(); i++)
    {
        int temp = str[i] - '0';
        sum += temp;
    }

    return sum;
}

int main()
{
    string str = "14789";

    cout << sumOfNumbers(str) << endl;
}