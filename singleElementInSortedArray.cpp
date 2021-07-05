class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i = 0, s = nums.size();
        int res = 0;
        if(s == 0)
        {
            return -1;
        }
        if(s == 1)
        {
            return nums[0];
        }
        while(i < s-1)
        {
            if(nums[i] != nums[i+1])
            {
                return nums[i];
            }
            i = i + 2;
        }
        return nums[i];
    }
};
