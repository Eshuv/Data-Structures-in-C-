#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "The moon is beautiful isn't it?";

    vector<string> tokens;

    stringstream check1(str);

    string intermidiate;

    while (getline(check1, intermidiate, ' '))
    {
        tokens.push_back(intermidiate);
    }
    
    for(int i = 0; i < tokens.size(); i++)
    {
        cout << tokens[i] << endl;
    }
}   