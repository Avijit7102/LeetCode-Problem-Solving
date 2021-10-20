#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

int main()
{
    vector<int>nums={1,1,1,2,2,3};
    map<int, int>m;
    map<int, int>mp;
    int n = nums.size();
    int k = 2;
    int j = 0;

    cout << "Elements on the map : " << endl;
    for(int i = 0; i < n; i++)
    {
        m[nums[i]]++;

    }

    for(auto x: m)
    {
        cout << x.first << " " << x.second << endl;
    }

    for(auto n: nums)
    {
        mp[n]++;
    }
    cout << "Elements on the map again: " << endl;
    for(auto x: mp)
    {
        cout << x.first << " " << x.second << endl;
    }

    cout << endl;
    priority_queue<pair<int, int> > pq;

    for(auto x: m)
    {
        pq.push(make_pair(x.second, x.first));
    }

    vector<int>res;

    while(k--)
    {
        res.push_back(pq.top().second);
        pq.pop();
    }

    for(auto v: res)
    {
        cout << v << endl;
    }
}

