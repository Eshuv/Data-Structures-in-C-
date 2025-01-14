#include<bits/stdc++.h>
using namespace std;

string insertDash(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if((str[i] == '1' || str[i] == '3' || str[i] == '5' || str[i] == '7' || str[i] == '9') && (str[i+1] == '1' || str[i+1] == '3' || str[i+1] == '5' || str[i+1] == '7' || str[i+1] == '9'))
        {
            str.insert(i+1, "-" );
            i++;
        }
    }
    return str;
}

int main()
{
    string str = "1345798";

    cout << insertDash(str);
}