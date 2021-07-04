#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    string s = "rat";
    sort(s.begin(), s.end());
    string t = "car";
    sort(t.begin(), t.end());
    if(s == t)
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }

}
