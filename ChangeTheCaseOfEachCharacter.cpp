#include<bits/stdc++.h>
using namespace std;

string changeCase(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if(isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else
        {
            str[i] = toupper(str[i]);
        }
    }
    return str;
}

int main()
{
    string str = "Hello";

    cout << changeCase(str);
}