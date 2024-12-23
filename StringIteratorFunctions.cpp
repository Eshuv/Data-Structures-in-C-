#include<iostream>
using namespace std;

void printString(string str)
{
    string::iterator it;

    for(it = str.begin(); it != str.end(); it++)
    {
        if(it == str.begin())
        {
            *it = 'D';
        }
        cout << *it;
    }
    cout << endl;
}


void printReversestring(string str)
{
    string::reverse_iterator it;

    for(it = str.rbegin(); it != str.rend(); it++)
    {
        cout << *it;
    }
    cout << endl;
}

void printConstantString(string str)
{
    for(auto it = str.cbegin(); it != str.cend(); it++)
    {
        cout << *it;
    }
    cout << endl;
}

void printReverseConstantString(string str)
{
    for(auto it = str.crbegin(); it != str.crend(); it++)
    {
        cout << *it;
    }
    cout << endl;
}

int main()
{
    string str = "The moon is beautiful isn't it?";

    printString(str);
    printReversestring(str);
    printConstantString(str);
    printReverseConstantString(str);
}