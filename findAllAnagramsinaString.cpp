#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main()
{
    string s = "abab", p = "ab";

    vector<int>v, pv(26,0), sv(26,0);
    if(p.length() > s.length())
    {
        cout << v << endl; // it will print empty vector .. and terminate the program.
        return 0;
    }
    int l = 0, r = 0;

    for(int i = 0; i < p.length(); i++)
    {
        pv[p[i] - 'a']++; // adding 1 for each character present in p string other will 0. its a window for char a to z.
        sv[s[i] - 'a']++; // same the way we doing for s string
        r++;
    }

    if(pv == sv) // checking if both are same then 0 index will insert in our v vector that represents our result.
    {
        v.push_back(0);
    }

    while(r < s.size()) // loop will run till size of s string
    {
        sv[s[l] - 'a']--; // all the time we are removing all the way left window
        sv[s[r] - 'a']++; // adding next right in window
        r++;
        l++;
        if(pv == sv) // checking
        {
            v.push_back(l); // inserting l value in v vector
        }
    }
    for(auto x: v)
    {
       // cout << x.first << " " << x.second << endl;
        cout << x << endl;
    }
    return 0;
}
