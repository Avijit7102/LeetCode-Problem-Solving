
/*
LeetCode submission:
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator it;
        it = remove(nums.begin(), nums.end(), val);
        nums.erase(it, nums.end());
        return nums.size();

    }
};
*/
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int removeElement(vector<int>& nums, int val) {
	vector<int>::iterator it;
	it = remove(nums.begin(), nums.end(), val);
	nums.erase(it, nums.end());
	cout << "size: " << nums.size() << endl;
 }

int main()
{
    vector <int> nums = {0,1,2,2,3,0,4,2};
    removeElement(nums, 2);
}

