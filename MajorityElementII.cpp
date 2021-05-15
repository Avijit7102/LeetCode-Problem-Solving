class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> myMap;
        vector<int> v;
        for(int i = 0; i < nums.size(); i++)
        {
            int a = nums[i];
            myMap[a]++;
        }

        int n = nums.size() / 3;
        int result;
        for(auto x : myMap)
        {
            if(x.second > n)
            {
                v.push_back(x.first);
            }
        }

        return v;
    }
};
