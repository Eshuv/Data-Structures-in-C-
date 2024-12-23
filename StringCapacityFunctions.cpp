#include<iostream>
using namespace std;

int main()
{
    string str = "The moon is beautiful isn't it?";

    cout << "The capacity -> " << str.capacity() << endl;

    str.resize(28);

    cout << "Str after the resize -> " << str << endl;

    cout << str.length() << endl;

    str.shrink_to_fit();

    cout << "The capacity after shrink_to_fit function -> " << str.capacity() << endl;
}