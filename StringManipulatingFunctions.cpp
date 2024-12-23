#include<iostream>
using namespace std;

int main()
{
    string str = "The moon is beautiful isn't it?";
    cout << str.length() << endl;

    char ch[50];

    str.copy(ch, 31 ,0);
    cout << ch << endl;
    
    string str1 = "Eshuv";
    string str2 = "Abhay";

    cout << "String 1  is -> " << str1 << endl;
    cout << "String 2  is -> " << str2 << endl;

    str1.swap(str2);

    cout << "String 1  is -> " << str1 << endl;
    cout << "String 2  is -> " << str2 << endl;
}