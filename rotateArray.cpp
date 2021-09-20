class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k == nums.size())
        {
            return;
        }
        if(k < 0)
        {
            k= k+nums.size();
        }
        if(k>nums.size())
        {
            k= k% nums.size();
        }
        int l = nums.size()-1;
        vector<int> v;
        int a = l - k;
        while(k > 0)
        {
            v.push_back(nums[l]);
            l--;
            k--;
        }
        reverse(v.begin(), v.end());
        for(int i = 0; i <= a; i++)
        {
            v.push_back(nums[i]);
        }
        nums.clear();
        nums = v;
    }
};
