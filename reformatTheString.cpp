class Solution {
public:
    string reformat(string s) {
        string L = ""; //new string for letters
        string D = ""; // new string for digit
        string result = ""; // for result;
        int l = 0, d = 0; // for counting letters and digits
        for(int i = 0; i < s.length(); i++)
        {
            if(isalpha(s[i]))
            {
                l++;
                L = L + s[i];
            }
            if(isdigit(s[i]))
            {
                d++;
                D = D + s[i];
            }
        }
        int t = l - d;
        if(t == -1 || t == 0 || t == 1)
        {
            if(l >= d)
            {
                for(int i = 0; i < l; i++)
                {
                    int count = i;
                    result = result + L[i];
                    if(count < d)
                    {
                        result = result + D[i];
                    }
                }
            }
            else
            {
                for(int i = 0; i < d; i++)
                {
                    int count = i;
                    result = result + D[i];
                    if(count < l)
                    {
                        result = result + L[i];
                    }
                }
            }
        }
        else
        {
            return result;
        }
        return result;
    }
};
