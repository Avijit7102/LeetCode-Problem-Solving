#include<iostream>
#include<vector>
#include <bits/stdc++.h>
#include<bitset>
using namespace std;
int main()
{
    int num = 5;
    vector<string>time;

    for(int i = 0; i < 12; i++)
    {
        bitset<4>x(i);
        for(int j = 0; j < 60; j++)
        {
            bitset<6>y(j); // check on Google about the size from 1 to 60 as a binary representation, thn you can get why 6 here.
            if(x.count() + y.count() == num)
            {
                //cout << "i is : " << i << " and j is : " << j << endl;
                //cout << "x.count() : " << x.count() << " and y.count() : " << y.count() << endl;
                string d = to_string(j);
                if(j < 10)
                {
                    time.push_back(to_string(i)+":0"+d);
                }
                else
                {
                    time.push_back(to_string(i)+":"+d);
                }
            }
        }
    }

    for(auto o : time)
    {
        cout << o << endl;
    }
}
