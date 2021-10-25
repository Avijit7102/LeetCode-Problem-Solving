#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int main()
{
    vector<vector<int>>points = {{3,3},{5,-1},{-2,4}};
    int k = 2;

    priority_queue<pair<int,int>>pq;
    for(int i = 0; i < points.size(); i++)
    {

        int x = points[i][0];
        int y = points[i][1];
        int p = pow(x,2) + pow(y,2);
        pq.push({p,i});
        if(pq.size() > k)
        {
            pq.pop();
        }

    }
    vector<vector<int>>res;
    while(!pq.empty())
    {
        int a = pq.top().second;
        res.push_back(points[a]);
        pq.pop();

    }

     for(int i = 0; i < res.size(); i++)
     {
         for(int j = 0; j < res[i].size(); j++)
         {
             cout << res[i][j] << " ";
         }
         cout << endl;
     }
}
