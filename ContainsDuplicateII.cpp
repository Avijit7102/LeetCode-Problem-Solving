class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++)
        {
            int a = nums[i];
            if(m.find(a) != m.end() && abs(i - m[nums[i]]) <= k)
            {
                return true;
            }
            else
            {
                //m.insert({nums[i], i});
                 m[nums[i]] = i;
            }
        }
        return false;
    }
};
