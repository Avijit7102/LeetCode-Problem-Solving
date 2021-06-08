class Solution {
public:
    bool checkRecord(string s) {
        int a = 0, p = 0, l = 0, count = 1, c = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'A')
            {
                a++;
                if(a == 2)
                {
                    return false;
                }
            }
            if(s[i] == 'L')
            {
                l++;
                if(l == 3)
                {
                    return false;
                }
            }
            else
            {
                l = 0;
            }
        }
        return true;
    }
};
