//inserting all the char of the string into map;
//thn checking string from index 0 to last that is present in the map && value == 1;
// if condition true thn returning the index value of the string
// otherwise it will return -1;

class Solution {
public:
    int firstUniqChar(string s) {
        int l = s.length();
        map<char, int>m;
        for(int i = 0; i < l; i++)
        {
            m[s[i]]++;
        }

        for(int i = 0; i < l; i++)
        {
            if(m[s[i]] == 1)
            {
                return i;
            }
        }

        return -1;
    }
};
