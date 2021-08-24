#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    string s = "11101011110000100000";
    int maxOne = 0, maxZero = 0, maxSoFarOne = 0, maxSoFarZero = 0, l = s.length();

    for(int i = 0; i < l; i++)
    {
        char ch = s[i];
        if(ch == '1')
        {
            maxSoFarOne++;
            maxOne = max(maxOne, maxSoFarOne);
            maxSoFarZero = 0;
        }
        if(ch == '0')
        {
            maxSoFarZero++;
            maxZero = max(maxZero, maxSoFarZero);
            maxSoFarOne = 0;
        }
    }
    if(maxOne > maxZero)
    {
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

    return 0;
}
//if s[i] == 1, we are incrementing maxSoFarOne and calculating the maxOne and if not we are initializing maxSoFarOne = 0. Think we have to count it again from 0. Same algorithm for s[i] == 0.
