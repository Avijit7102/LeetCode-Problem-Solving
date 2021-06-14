#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s = "Hello";

    for(int i =0; i < s.length(); i++)
    {
        if(isupper(s[i]))
        {
           s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
}
