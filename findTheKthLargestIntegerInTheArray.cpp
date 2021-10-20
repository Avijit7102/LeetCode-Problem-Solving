#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <queue>
using namespace std;

int main()
{
    vector<string> nums = {"0","1","1"};
    int k = 2, n = nums.size();

    multimap<string,int>mp; // multimap because mutiple values can have the same key. I mean to say on nums vector there could be same string multiple times.

    for(int i = 0; i < n; i++)
    {
        int s = nums[i].size();
        mp.insert(make_pair(nums[i], s));
    }

    priority_queue<pair<int, string>>pq;

    for(auto it: mp)
    {
        pq.push({it.second, it.first});
    }

    while(!pq.empty() && k!= 1)
    {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
        k--;
    }
    cout << "from map : " << endl;
    for(auto m: mp)
    {
        cout << m.first << " " << m.second << endl;
    }

    cout << "result is : " << pq.top().second << endl;

}
