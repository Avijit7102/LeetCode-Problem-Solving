#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s = "aab";
    set<char>ss;
    int l = 0, len = s.length(), count = 0, res = 0;

    for(int i = 0; i < len; i++)
    {
        char ch = s[i];
        while(ss.find(ch) != ss.end())
        {
            ss.erase(s[l]);
            l++;
        }
        ss.insert(ch);
        res = max(res,i - l+ 1);

    }

    cout << res << endl;

}
