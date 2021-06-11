class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>result; // for our output

        for(int i = 0; i < words.size(); i++)
        {
            string s = words[i];
            for(int j = 0; j < words.size(); j++)
            {
                string ss = words[j];
                if(s == ss) //just skipping if both are equal
                {
                    continue;
                }
                else
                {
                    if(s.find(ss) != string :: npos) // checking if it is a substring or not, if substring it will be added on vector
                    {
                        result.push_back(ss);
                    }
                }
            }
        }
        //below two line are for removing
        sort( result.begin(), result.end() );
        result.erase( unique( result.begin(), result.end() ), result.end() );
        return result;
    }
};
