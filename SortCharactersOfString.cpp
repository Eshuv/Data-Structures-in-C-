#include <bits/stdc++.h>
#include <vector>
using namespace std;

void sortString(string str)
{
    int arr[26] = {0};

    for(int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        int temp = int(ch);
        //cout << temp;
        arr[temp - 97]++;
    }

    for(int i = 0; i < 26; i++)
    {
        int temp = arr[i];
        for(int j = 0; j < temp; j++)
        {
            cout << char(i+97);
        }
    }
}

int main()
{
    string str = "beautiful";

    sort(str.begin(), str.end());

    cout << str << endl;

    int temp = int(str[0]);

    cout << temp << endl;

    sortString(str);

    return 0;
}