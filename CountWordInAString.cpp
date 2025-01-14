#include<bits/stdc++.h>
#include<vector>
using namespace std;

int countWords(string str)
{
    vector<string> words;
    string temp = "";

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
        {
            words.push_back(temp);
            temp = "";
        }
        else
        {
            temp += str[i];
        }
    }

    return words.size() + 1;
}

int countWordsTokenization(string str)
{
    vector<string> tokens;

    stringstream check1(str);

    string intermidiate;

    while(getline(check1, intermidiate, ' '))
    {
        tokens.push_back(intermidiate);
    }

    return tokens.size();
}

int main()
{
    string str = "The moon is beautiful isn't it?";

    cout << countWords(str) << endl;

    cout << countWordsTokenization(str) << endl;
}