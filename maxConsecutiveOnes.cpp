#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums = {1,1,0,1,1,1,0,0,1};
    int maxOne = 0, maxSoFar = 0, n = nums.size();

    for(int i = 0; i < n; i++)
    {
        if(nums[i] == 0)
        {
            maxSoFar = 0;
        }else{
            maxSoFar++;
            maxOne = max(maxOne, maxSoFar);
        }
    }
    cout << maxOne << endl;
}
