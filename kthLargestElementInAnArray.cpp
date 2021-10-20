#include <iostream>
#include <vector>

using namespace std;

void display(vector<int>&arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(vector<int>&array, int l, int m, int r)
{
    int i, j, a, nl, nr;
    nl = m-l+1;
    nr = r-m;

    vector<int>lArr(nl);
    vector<int>rArr(nr);

    for(i = 0; i < nl; i++)
    {
        lArr[i] = array[i+l];
    }
    for(j = 0; j < nr; j++)
    {
        rArr[j] = array[m+1+j];
    }

    i = 0, j = 0, a = l;

    while(i < nl && j < nr)
    {
        if(lArr[i] <= rArr[j])
        {
            array[a] = lArr[i];
            i++;
            a++;
        }
        else
        {
            array[a] = rArr[j];
            a++;
            j++;
        }
    }
    while(i < nl)
    {
        array[a] = lArr[i];
        a++;
        i++;
    }

    while(j < nr)
    {
        array[a] = rArr[j];
        a++;
        j++;
    }
}

void mergeSort(vector<int>&array, int l, int r)
{
    int m;
    if(l < r)
    {
        m = l + (r - l)/2;
        mergeSort(array, l, m);
        mergeSort(array, m+1, r);
        merge(array, l, m, r);
    }
}
int main()
{
    vector<int> nums = {3,2,3,1,2,4,5,5,6};
    int k = 4;
    int n = nums.size();
    cout << "Array before sorting : " << endl;

    display(nums, n);

    mergeSort(nums, 0, n-1);

    cout << "Array after sorting : " << endl;

    display(nums, n);

    cout << nums[n-k];
}
