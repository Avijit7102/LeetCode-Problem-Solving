#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
class cpm
{
public:

    bool operator()(pair<int,int>a, pair<int,int>b)
    {

        if(a.second == b.second)
        {
            return a.first > b.first;
        }
        return a.second > b.second;
    }
};

int main()
{
    vector<int>arr = {1,2,5,5,6,6,7,7,8,9};
    int k = 7, x = 7;

    //unordered_map<int,int>m;
     priority_queue<pair<int,int>, vector<pair<int,int>>,cpm>pq;

    vector<int>ans;
    for(auto v: arr)
    {
        int d = abs(v-x);
        //m.insert({v,d});
        pq.push({v,d});
    }


    cout << "printing from queue : " << endl;

    while(!pq.empty() && k--)
    {
        //cout << pq.top().first << " " << pq.top().second << endl;
        ans.push_back(pq.top().first);
        pq.pop();
    }
    cout << endl;
    sort(ans.begin(),ans.end());

    cout << "OUR ANS : " << endl;
    for(auto v: ans)
    {
        cout << v << " ";
    }
    cout << endl;

}
//we can do with using compare operator and map, just using pq. insert item into pq. if pq size > k then just pop it. and than insert it into vector. and reverse it.
