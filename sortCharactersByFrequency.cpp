#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <string>

using namespace std;

int main()
{
    string s = "Aabb";
    int l = s.length();

    unordered_map<char,int> m;
    for(char c: s)
    {
        m[c]++;
    }

    priority_queue<pair<int,char>>pq; //
    for(auto a: m)
    {
        pq.push(make_pair(a.second,a.first));
    }

    string ans = "";
    while(!pq.empty())
    {
        char ch = pq.top().second;
        int a = pq.top().first;
        for(int i = 0; i < a; i++)
        {
            ans+= ch;
        }
        pq.pop();
    }

    for(char ch : ans)
    {
        cout << ch;
    }
    cout << endl;
}
