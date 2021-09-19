#include <iostream>
#include <vector>

using namespace std;
int main()
{
     vector<int> nums = {1,2,3,4,5,6,7,8};
     int target = 2, i = 0, r = nums.size() - 1, res = -1, len = nums.size();

     while(i <= r)
     {
         int mid = i + (r - i) / 2;
         if(target == nums[mid])
         {
             res = mid;
             break;
         }
         if(target > nums[mid])
         {
             i = mid + 1;
         }
         if(target < nums[mid])
         {
             r = mid - 1;
         }
     }
     cout << res << endl;

}
// Its a binary search problem.
