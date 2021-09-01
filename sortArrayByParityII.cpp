class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        int s = nums.size();
        vector<int>res;
        for(int i = 0; i < s; i++)
        {
            if(nums[i] % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }

        for(int i = 0; i < s/2; i++) // here s/2 because every time we are inserting two element on our result vector
        {
            res.push_back(even[i]);
            res.push_back(odd[i]);
        }
        return res;
    }
};
