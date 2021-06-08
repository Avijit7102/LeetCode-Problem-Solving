class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        //adding string s into s, deleting first and last ch and checking original s is exist or not..
        //if exist return true else flase.
        return (s + s).substr(1, 2*s.size()-2).find(s) != -1;
    }
};
