class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;

        vector<vector<string>>result;
        for(string ss : strs)
        {
            string s = ss;
            sort(ss.begin(), ss.end());
            mp[ss].push_back(s);
        }
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            result.push_back(it->second);
        }
        return result;
    }
};
