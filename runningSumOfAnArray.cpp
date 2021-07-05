#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>nums {3,1,2,10,1};
    vector<int>v;
    int sum = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];
        v.push_back(sum);
    }

    for(auto x : v)
    {
        cout << x << endl;
    }
}
