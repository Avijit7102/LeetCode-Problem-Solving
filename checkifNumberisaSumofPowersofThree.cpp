#include<iostream>
#include<map>
#include<cmath>
using namespace std;

int main()
{
    int n = 29;

    while(n > 1)
    {
        int rem = n % 3;
        if(rem > 1)
        {
            cout << "false";
            return 0;
        }
        n = n / 3;
    }
    cout << "true";
    return 0;
}
