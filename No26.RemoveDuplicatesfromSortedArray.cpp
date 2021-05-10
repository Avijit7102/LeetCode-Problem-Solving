// for unique function we used algorithm library ...


/*
Leetcode Submission:

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase( std::unique( nums.begin(), nums.end() ), nums.end() );
        return nums.size();
    }
};
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void result(vector<int> &nums)
{
    nums.erase( std::unique(nums.begin(), nums.end()),nums.end());
    cout << nums.size() << endl;
}
int main()
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    result(nums);


}

