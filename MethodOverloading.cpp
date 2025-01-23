#include <bits/stdc++.h>
using namespace std;

class Addition
{
    public:

    int Add(int a, int b)
    {
        return a+b;
    }

    double Add(double a, double b)
    {
        return a+b;
    }
};

int main()
{
    Addition inst;
    int res1 = inst.Add(5, 6);
    double res2 = inst.Add(2.8, 7.9);

    cout << res1 << endl;
    cout << res2 << endl;
}