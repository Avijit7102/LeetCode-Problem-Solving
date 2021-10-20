#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    string s1 = "ab", s2 = "eidboaoo";
    vector<int>a(26,0);
    vector<int>b(26,0);
    int l = 0, r = 0;
    int s1Size = s1.length(), s2Size = s2.length();

    if(s1Size > s2Size)
    {
        cout << "false";
        return 0;
    }

    while(r < s1Size)
    {
        a[s1[r] - 'a'] += 1;
        b[s2[r] - 'a'] += 1;
        r++;
    }
    r--;

    while(r < s2Size)
    {
        if(a == b)
        {
            cout << "true";
            return 0;
        }
        r++;
        if(r != b.size())
        {
            b[s2[r] - 'a'] += 1;
        }
        b[s2[l] - 'a'] -= 1;
        l++;

    }
    cout << "false";
}

