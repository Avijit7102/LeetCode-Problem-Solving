class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence); // for breaking sentence into word
        string s;
        string ans = "";
        int a = 0; // a for index of the word in the sentence
        while(ss >> s)
        {
            int i = a + 1; // for printing a end of the for each word,, code inside nested while loop
            char ch = s[0]; // taking first character of a word
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                s = s + "ma"; // adding "ma"
            }
            else
            {
                s.erase(0,1); // erasing first character
                s.push_back(ch); //adding first character at the end
                s = s + "ma"; // adding "ma" after that

            }
            while(i > 0) // this one adding a character end of the each word, but question is how many times? its depends on the index of the word in the sentence starting with 1
            {
                s = s + 'a';
                i--;
            }
            a++;
            ans = ans + s + ' '; // ans is our main result, so adding each word s on it with a space.
        }
        ans.pop_back(); //there will extra space at the end; we have to delete it.
        return ans; // at last this is the ans
    }
};
