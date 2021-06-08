class Solution {
public:
    string reverseWords(string s) {
        string ss;
        string S;
        for(int i = 0; i <= s.length(); i++)
        {
            if(s[i] == ' ' || i == s.length())
            {
                reverse(ss.begin(), ss.end());
                S = S + ss;
                if(i != s.length())
                {
                    S = S + ' ';
                }
                ss = "";
            }
            else
            {
                ss = ss + s[i];
            }

        }
        return S;
    }
};

//checking if there is space or i equal to string's length then reversing new ss and inserting it into another string S with a space if i not equal to length
