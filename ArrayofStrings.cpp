#include <iostream>
#include<array>
#include <vector>
using namespace std;

int main()
{
    string arr[] = {"Abhay", "Anuj", "Eva", "Ani"};

    vector<string> strArray =  {"Abhay", "Anuj", "Eva", "Ani"};

    array<string, 5> strArray1 =  {"Abhay", "Anuj", "Eva", "Ani"};

    strArray.push_back("Vishu");

    for(int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "--------------------------------------------------------" << endl;

    for(int i = 0;i < strArray.size(); i++)
    {
        cout << strArray[i] << endl;
    }

    cout << "--------------------------------------------------------" << endl;

    for(int i = 0;i < strArray.size(); i++)
    {
        cout << strArray1[i] << endl;
    }
}