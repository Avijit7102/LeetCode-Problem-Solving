#include<iostream>
#include<stack>
#include<map>
#include<vector>
using namespace std;
int main()
{
    vector<int>num1 = {2,4};
    vector<int>num2 = {1,2,3,4};
    stack<int>s;
    s.push(num2[0]);
    map<int, int>m;
    for(int i = 1; i < num2.size(); i++)
    {
        while(!s.empty() && s.top() <= num2[i])
        {
            m.insert({s.top(), num2[i]});
            s.pop();
        }
        s.push(num2[i]);
    }
    vector<int>res;
    for(int i = 0; i < num1.size(); i++)
    {
        if(m.find(num1[i]) != m.end())
        {
            res.push_back(m[num1[i]]);
        }
        else
        {
            res.push_back(-1);
        }
    }

    for(auto x : res)
    {
        cout << x << endl;
    }

}
