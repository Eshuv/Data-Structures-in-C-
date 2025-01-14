#include<bits/stdc++.h>
using namespace std;

bool isPalendrome(string str)
{
    int first = 0;
    int last = str.length() - 1;
    while(first < last)
    {
        cout << str[first] << " " << str[last] << endl;
        if(str[first] == str[last])
        {
            first++;
            last--;
        }
        else
        {
            return false;
        }
        
    }
    return true; 

     /*string temp = str;
    reverse(temp.begin(), temp.end());

    if(str == temp)
        return true;
    return false; */
}

int main()
{
    string str = "nitin";
    //cout << str[0];
    bool res = isPalendrome(str);
    cout << res << endl;
}