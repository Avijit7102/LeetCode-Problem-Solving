#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n = 5;
    vector <int> v(n+1);
    v[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        int x = i / 2;
        if(i % 2 == 0)
        {
            //cout << "i is : " << i << endl;
            v[i] = v[x];
        }
        else
        {
            //cout << "i is : " << i << endl;
            int f = v[x];
            f++;
            v[i] = f;
        }
    }

    for(auto c : v)
    {
        cout << c << endl;
    }
}

//v[i] = v[i/2] + i%2;
//we can use it inside the for this program too.
//https://leetcode.com/problems/counting-bits/
//this is the link

//idea is if i is even thn result will be v[i / 2]
//if i is odd thn result will be v[i/2] + 1;
