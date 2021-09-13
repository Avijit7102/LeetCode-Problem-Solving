#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>nums = {11,13,15,17};
    int ans = INT_MAX;
    int l = nums.size();

    for(int i = 0; i < l; i++)
    {
        if(nums[i] < ans)
        {
            ans = nums[i];
        }
    }
    cout << ans << endl;
}
//we can solve it by only one line of code using *min_element library..
//cout << "ans : " << *min_element(nums.begin(), nums.end()) << endl;
