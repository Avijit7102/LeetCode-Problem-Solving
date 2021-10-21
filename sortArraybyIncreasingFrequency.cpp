#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
using namespace std;

class cpm
{
public:
    bool operator()(pair<int,int>a, pair<int,int>b)
    {
        if(a.first == b.first)
        {
            return a.second < b.second;
        }
        return a.first > b.first;
    }
};
int main()
{
    vector<int> nums = {1,1,2,2,2,3};
    map<int,int>mp;

    for(int i  = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    cout << "printing maps: " << endl;

    priority_queue<pair<int,int>, vector<pair<int,int>>,cpm>pq;

    for(auto x: mp)
    {
        pq.push({x.second, x.first});
        cout << x.first << " " << x.second << endl;
    }

    cout << "printing queue: " << endl;

    vector<int>ans;

    while(!pq.empty())
    {
        int a = pq.top().first;
        for(int i = 0; i < abs(a); i++)
        {
            ans.push_back(pq.top().second);
        }
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }

    cout << "printing result: " << endl;

    for(auto v: ans)
    {
        cout << v << " ";
    }
    cout << endl;



}
