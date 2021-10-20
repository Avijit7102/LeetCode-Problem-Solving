#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
//this class for comparing.../// search for priority queue compare
class cmp
{
public:
    bool operator()(pair<int,string>a, pair<int,string>b)
    {
        if(a.first < b.first) return true;
        else if(a.first == b.first && a.second>b.second) return true;
        return false;
    }
};
int main()
{
    vector<string>words = {"the","day","is","sunny","the","the","the","sunny","is","is"};
    int k = 4, s = words.size();
    vector<string>res;
    map<string, int>mp;

    for(auto s: words)
    {
        mp[s]++;
    }

    priority_queue<pair<int, string>, vector<pair<int,string>>,cmp>pq;

    for(auto it: mp)
    {
        pq.push({it.second,it.first});

    }
    while(!pq.empty() && k!= 0)
    {
        res.push_back(pq.top().second);
        pq.pop();
        k--;
    }

    for(auto v: res)
    {
        cout << v << endl;
    }


}
