#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string>v;

    for(int i = 1; i <= n; i++)
    {

        if(i % 3 == 0 && i % 5 == 0)
        {
            v.push_back("FizzBuzz");
        }
        else if(i % 3 == 0)
        {
            v.push_back("Fizz");
        }
        else if(i % 5 == 0)
        {
            v.push_back("Buzz");
        }
        else
        {
            string s = to_string(i);
            v.push_back(s);
        }
    }

    for(auto x: v)
    {
        cout << x << endl;
    }
}

