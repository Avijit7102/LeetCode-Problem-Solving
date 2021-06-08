class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>m;
        for(int i = 0; i < magazine.length(); i++)
        {
            char c = magazine[i];
            m[c]++;
        }
        for(int i = 0; i < ransomNote.length(); i++)
        {
            m[ransomNote[i]]--;
            if(m[ransomNote[i]] < 0)
            {
                return false;
            }
        }
        return true;

    }
};
//inserting every char of magazine into map to count the frequency;
//
