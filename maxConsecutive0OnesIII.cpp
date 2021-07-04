#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k = 3;
    int s = 0, c = 0, result = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == 0)
        {
            c++;
        }

        while(c > k)
        {
            if(nums[s] == 0)
            {
                c--;
            }
            s++;
        }

        result = max(result, i - s + 1);
    }

    cout << result << endl;
}
