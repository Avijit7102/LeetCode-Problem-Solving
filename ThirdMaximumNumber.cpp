class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
        vector<int>v;
        vector<int>::iterator it;
        s.insert(nums.begin(), nums.end()); //inserting into set for removing the duplicate
        v.assign(s.rbegin(), s.rend()); //for getting largest to smallest
         if(v.size() >= 3)
           {
               it = v.begin()+2;
               return *it;
           }
           else
           {
               it = v.begin();
               return *it;
           }
    }
};
