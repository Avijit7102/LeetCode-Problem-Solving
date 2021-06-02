class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> vs; // copying vc, then reverse
        vector<char> vc; // for inserting string s into vector
        string ss;
        for(int i = 0; i < s.length(); i++)
        {
            if(isalpha(s[i]) && isupper(s[i]))
            {
                vc.push_back(tolower(s[i]));
                continue;
            }
            if(ispunct(s[i]) || s[i] == ' ')
            {
                continue;
            }
            else
            {
                vc.push_back(s[i]);
            }
        }
        int count = 0;
        vs = vc;
        reverse(vs.begin(), vs.end());
        for(int i = 0; i < vs.size(); i++)
        {
            if(vs[i] != vc[i])
            {
                count++;
                break;
            }
        }
        if(count == 0)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};
