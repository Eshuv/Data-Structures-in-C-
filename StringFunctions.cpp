#include <iostream>
using namespace std;

int main()
{
    string str = "The moon is beautiful isn't it?";

    string str2 = "Yes";

    cout << "Length of str -> " << str.length() << "Size of str -> " << str.size() << endl;

    cout << str.at(1) << endl;

    string str3 = str + " " + str2;

    cout << str3 << endl;

    cout << str.append(str2) << endl;

    // To compare two string is they are equal or not we usr str.compare() or we can use == operator.

    cout << str.find('a') << endl;
}