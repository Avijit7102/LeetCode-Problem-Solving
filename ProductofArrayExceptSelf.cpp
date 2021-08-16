
// Logic Behind this solution:
// implementing left and right array accordingly left and right side elements product expect itself
// another result array where first element will be right array 2nd element and and last element will be second from the last
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums = {-1,1,0,-3,3};
    int n = nums.size();

    vector<int>left(n),right(n);
    int a = 1;

    for(int i = 0; i < n; i++)
    {
        int product = a * nums[i];
        left[i] = product;
        a = product;
    }
    int b = 1;
    for(int i = n - 1; i >= 0; i--)
    {
        int productRight = b * nums[i];
        right[i] = productRight;
        b = productRight;
    }

    vector<int>res(n);

    res[0] = right[1];
    res[n-1] = left[n-2];

    for(int i = 1; i < n - 1; i++)
    {
        res[i] = left[i - 1] * right[i + 1];
    }

    for(auto z: res)
    {
        cout << z << endl;
    }
}
