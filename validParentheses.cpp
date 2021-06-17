#include<iostream>
#include<stack>
#include<string>

using namespace std;
int main()
{
    string s = "()[]";
    stack<char>st;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
        else
        {
            if(s[i] == ')')
            {
                if(!st.empty() && st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    cout << "False\n";
                    return 0;
                }
            }
            if(s[i] == '}')
            {
                if(!st.empty() && st.top() == '{')
                {
                    st.pop();
                }
                else
                {
                    cout << "False\n";
                    return 0;
                }
            }
            if(s[i] == ']')
            {
                if(!st.empty() && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    cout << "False\n";
                    return 0;
                }
            }
        }

    }
    if(st.empty())
    {
        cout << "True\n";
        return 0;
    }
    else
    {
        cout << "False\n";
        return 0;
    }
}
