#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str = "The moon is beautiful isn't it?";

    string sub = str.substr(7,5);

    string strDemo = "I am Abhay";

    //strDemo.insert(10, "Eshuv");
    strDemo.replace(5, 5, "Eshuv");
    strDemo.erase(2,3);
    cout << strDemo << endl;

    string s1("Hello");
    string s2(" World");

    //s1.append(s2);

    for(auto i : s2)
    {
        s1 += i;
    }
    cout << s1 << endl;
}