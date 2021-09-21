class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int len = nums.size(), r = 0, l = len - 1;
        int a = -1, b = -1;
        while(r <= l)
        {
            int mid = l + (r - l) / 2;
            if(nums[mid] < target)
            {
                r = mid + 1;
            }
            else if(nums[mid] > target)
            {
                l = mid - 1;
            }
            else if(nums[mid] == target)
            {
                a = b = mid;
                while (a-1 >= 0 && nums[a-1] == target )
                {
                    a--;
                }
                while (b+1 < len && nums[b+1] == target )
                {
                    b++;
                }

                return {a,b};

            }
        }
        return {a,b};

    }
};
