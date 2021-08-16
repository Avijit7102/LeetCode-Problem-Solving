#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>nums = {1,3,2,2,2};
    int s = nums.size();
    int left = -1, right = -1;

    int startValue = nums[0];
    int endValue = nums[s-1];

    for(int i = 1; i < s; i++)
    {
        startValue = max(startValue, nums[i]);
        if(nums[i] < startValue) // checking the elements is smaller than our max value or not
        {
            left = i; // if nums[i] smaller than maxValue we are storing the index value.
        }
    }

    for(int i = s - 2; i >= 0; i--)
    {
        endValue = min(endValue, nums[i]);
        if(nums[i] > endValue) // checking the elements is greater than our min value or not

        {
            right = i; // if nums[i] greater than minValue we are storing the index value.
        }
    }
    if(right == -1 || left == -1)
    {
        cout << "0" << endl;
        return 0;
    }
    cout << left - right + 1 << endl;
    return 0;

}
