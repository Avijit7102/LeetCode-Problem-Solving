class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;

        for(int i = 0; i < nums.size(); i++)
        {
            int x = pow(nums[i], 2);
            cout << x << endl;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        return v;

    }
};
