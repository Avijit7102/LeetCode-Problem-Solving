class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> myMap;
        for(int i = 0; i < nums.size(); i++)
        {
            int a = nums[i];
            myMap[a]++;
        }

        int n = nums.size() / 2;
        int result;
        for(auto x : myMap)
        {
            if(x.second > n)
            {
                result = x.first;
            }
        }

        return result;
    }
};
