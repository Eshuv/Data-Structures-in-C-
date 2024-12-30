#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Abhay";

    //reverse(str.begin(), str.end());

    //str = string(str.rbegin(), str.rend());

    int l = 0;
    int r = str.length() - 1;

    while(l < r)
    {
        swap(str[l], str[r]);

        l++;
        r--;
    }

    cout << str;
}