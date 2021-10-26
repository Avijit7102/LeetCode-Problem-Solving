//https://www.youtube.com/watch?v=PmlfVdY_XjI&list=PLym69wpbTIIEOesltWGUsVnY9HDWbJit_&index=27
//using quick sort we solved the problem

#include <iostream>
#include <vector>

using namespace std;


int partitaiton(vector<int>&n,int low, int high)
{
    int pivot, i, j, t;

    pivot = n[high];

    for(i = low-1, j = low; j < high; j++)
    {
        if(n[j] < pivot)
        {
            i++;
            t = n[j];
            n[j] = n[i];
            n[i] = t;
        }
    }
    t = n[high];
    n[high] = n[i+1];
    n[i+1] = t;

    return i+1;
}

void quickSort(vector<int>&n, int low, int high)
{
    if(low >= high)
    {
        return;
    }
    int p = partitaiton(n, low, high);
    quickSort(n, low, p-1);
    quickSort(n, p+1, high);
}
int main()
{
    vector<int>nums = {2,0,2,1,1,0};
    int l = nums.size()-1;
    quickSort(nums, 0, l);

    for(auto v: nums)
    {
        cout << v << " ";
    }
    cout << endl;

}
