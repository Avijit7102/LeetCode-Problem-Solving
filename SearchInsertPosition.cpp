//LeetCode problem number 35

/*
Leetcode submission:
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int result;
        for(int i = 0; i <= nums.size()-1; i++)
        {
            if(nums[i] == target || nums[i] > target)
            {
                result = i;
                break;
            }
            if(target > nums[i])
            {
                result = i + 1;
            }

        }
        return result;
    }
};
*/
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> nums = {1,3,5,6};
    int target, result, count = -1;
    cin >> target;

    for(int i = 0; i <= nums.size()-1; i++)
    {
        if(nums[i] == target || nums[i] > target)
        {
            result = i;
            break;
        }
        if(target > nums[i])
        {
            result = i + 1;
        }

    }
    cout << result << endl;

}
