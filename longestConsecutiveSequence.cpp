#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>nums = {0,3,7,2,5,8,4,6,0,1};
    set<int>s;
    int result = 0;
    for(auto v: nums)
    {
        s.insert(v);
    }

    for(int i = 0; i < nums.size(); i++)
    {

        if(s.find(nums[i]-1) == s.end())
        {
            int count = 1;
            int x = nums[i]+1;
            while(s.find(x)!= s.end())
            {
                count++;
                x++;
            }
            result = max(result, count);
        }

    }
    cout << result << endl;
}
//nums{1,2,4,3,100,102,101}
//inserting it to set.. thn using for loop we are checking num-1 is existing in the set or not.
//if exist we are doing nothing and if not we are just incrementing our num by 1 and we will use while loop until our number is not exist in set.
//For that in loop we are incrementing our number by 1, as well as our counter value.
//If exist incrementing our counter value and then getting the maximum value from result.
