#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    for(int val : vec)
    {
        cout << val << endl;
    }

    cout << vec.front() << endl;
    cout << vec.back() << endl;

    vec.pop_back();
    cout << vec.back() << endl;

    cout << vec.at(1) << endl;
    cout << "Size -> " << vec.size() << endl;
    cout << "Capacity -> " << vec.capacity() << endl;


}