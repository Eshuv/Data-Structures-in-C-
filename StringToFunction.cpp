#include <iostream>
using namespace std;

// String as a parameter of a fucntion.

void printString(string s)
{
    cout << s << endl;
}

// Pointer of String as a parameter of a fucntion.

void printPointerString(string *s)
{ 
    if(s != nullptr)
    {
        cout << *s;
    }
}

int main()
{
    string str = "The moon is beautiful isn't it?";

    //printString(str);
    printPointerString(&str);
}