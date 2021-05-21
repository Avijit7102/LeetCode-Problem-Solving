#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s;
    getline(cin,s);

    int count = 0, a, flag;
    for(int i = s.length()-1; i >= 0; i--)
    {
        char ch = s[i];
        if(ch == ' ')
        {
            if(count > 0)
            {
                break;
            }
            continue;
        }
        if(isalpha(ch))
        {
            count++;
        }
    }
    cout << count << endl;
}
