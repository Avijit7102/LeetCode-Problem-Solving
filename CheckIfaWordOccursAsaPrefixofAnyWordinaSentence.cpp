class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        int count = 0;
        while(ss >> word)
        {
            count++;
            if(word.find(searchWord) == 0)
            {
                return count;
            }
        }
        return -1;
    }
};
