#include <iostream>
using namespace std;

int main()
{
    string str = "The moon is beautiful isn't it";

    str.push_back('?');
    cout << str << endl;

    str.pop_back();
    cout << str << endl;
}