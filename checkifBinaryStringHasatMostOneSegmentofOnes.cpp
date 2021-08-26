class Solution {
public:
    bool checkOnesSegment(string s) {
        int l = s.length();
        for(int i = 1; i < l-1; i++)
        {
            char ch = s[i];
            char ch1 = s[i+1];
            if(ch == '0' && ch1 == '1')
            {
                return false;
            }
        }
       return true;
    }
};
//If the string contains "01" it will return false other wise it will be true.
