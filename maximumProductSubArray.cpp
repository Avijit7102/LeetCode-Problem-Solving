#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums = {2,3,-2,4};
    int maxProd = INT_MIN, prod = 1, n = nums.size();

    for(int i = 0; i < n; i++)
    {
        prod = prod * nums[i];
        maxProd = max(maxProd, prod);
        if(prod == 0)
        {
            prod = 1;
        }
    }
    prod = 1;

    for(int i = n-1; i >= 0; i--)
    {
        prod = prod * nums[i];
        maxProd = max(maxProd, prod);
        if(prod == 0)
        {
            prod = 1;
        }
    }
    cout << maxProd << endl;
}

//Let's say the array is [1,2,3,-4,5,6].

//This array is split at -4. One half is [1,2,3] while the other half is [5,6].

//While computing from left to right, you will get the max product as 123 = 6 and from right to left you will get 5*6 = 30. This is the case when there is a split.
//Now, if all the numbers are positive or there are even number of negatives, the product from left to right and right to left would be same.
