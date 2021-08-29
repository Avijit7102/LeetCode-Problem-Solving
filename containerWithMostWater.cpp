#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>height = {1,8,6,2,5,4,8,3,7};
    int l = 0, r = height.size()-1, maxArea = 0;

    for(int i = 0; i < height.size(); i++)
    {
        //int s = min(height[l], height[r]);
        //int res = (r - l) * min(height[l], height[r]);
        maxArea = max(maxArea, (r - l) * min(height[l], height[r]));
        //cout << "maxArea : " << maxArea << endl;
        if(height[l] < height[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    cout << maxArea << endl;
    return 0;
}
//using two pointer l and r. initializing l = 0, and r = length-1;
//if left side less than right side height than l-- else r++
