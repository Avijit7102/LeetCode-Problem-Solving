#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {1,3,2,2,3,1};
    int l = nums.size();

    priority_queue<int>pq;

    for(int i = 0; i < l; i++)
    {
        pq.push(nums[i]);
    }

    for(int i = 1; i < l; i = i+2)
    {
        nums[i] = pq.top();
        pq.pop();
    }

    for(int i = 0; i < l; i = i+2)
    {
        nums[i] = pq.top();
        pq.pop();
    }

    for(auto v: nums)
    {
        cout << v << " ";
    }
    cout << endl;


}
