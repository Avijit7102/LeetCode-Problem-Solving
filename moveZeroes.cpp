class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = nums.size(), a = 0;
        for(int i = 0; i < l; i++)
        {
            if(nums[i] != 0)
            {
                nums[a] = nums[i];
                a++;
            }
        }
        while(a < l)
        {
            nums[a] = 0;
            a++;
        }

    }
};
