#include <iostream>
using namespace std;

int main()
{
    string str1("Eshuv");
    string str2 = "Abhay";
    string str3 = {'A', 'n', 'i'};
    string str4(5, 'A');
    string strInput;
    cout << "Input the string : ";
    cin >> strInput; 

    string getstr;
    cout << "Input String : ";
    getline(cin, getstr);

    cout << str1 << endl << str2 << endl << str3 << endl << str4 << endl << strInput << endl << getstr << endl;
}