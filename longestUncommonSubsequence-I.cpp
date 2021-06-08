class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a.size() > b.size())
        {
            return a.size();
        }
        else if(b.size() > a.size())
        {
            return b.size();
        }
        else
        {
            if(a == b)
            {
                return -1;
            }
            else
            {
                return a.size();
            }
        }
    }
};
//Bigger string can not be a subsequence of a smaller string..
//If both string are not identical return -1;

