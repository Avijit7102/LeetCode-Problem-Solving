class Solution {
public:
    int maxPower(string s) {
        int count = 1, c = 1;
        for(int i = 0; i < s.length()-1; i++)
        {
            if(s[i] == s[i+1])
            {
                c++;
            }
            if(c >= count)
            {
                count = c;
            }
            if(s[i] != s[i+1])
            {
                c = 1;
            }
        }
        return count;
    }
};
