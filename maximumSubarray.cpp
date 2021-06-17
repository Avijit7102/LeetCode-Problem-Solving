#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};

    int maxEnd = nums[0];
    int result = maxEnd;

    for(int i = 1; i < nums.size(); i++)
    {
        maxEnd = max(maxEnd + nums[i], nums[i]);
        result = max(result, maxEnd);
    }
    cout << result << endl;
}
