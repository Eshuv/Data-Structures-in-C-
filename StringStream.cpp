#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string str = "The moon is beautiful isn't it?";

    stringstream obj(str);
    string temp;

    while(obj >> temp)
    {
        cout << temp << endl;
    }
}