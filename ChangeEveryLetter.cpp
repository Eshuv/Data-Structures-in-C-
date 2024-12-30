#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Abhay";

    for(int i = 0; i < str.length(); i++)
    {
        char temp = str[i];
        int ascii = int(temp);

        ascii++;

        char temp2 = char(ascii);
        //cout << temp2;
        str[i] = temp2;
    }
    cout << str;
}