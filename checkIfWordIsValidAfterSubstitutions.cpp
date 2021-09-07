class Solution {
public:
    bool isValid(string s) {
        int l = s.length();
        stack<char>ss;
        for(int i = 0; i < l; i++)
        {
            if(s[i] == 'a' || s[i] == 'b')
            {
                ss.push(s[i]);
            }
            else
            {
                if(ss.size() < 2)
                {
                    return false;
                }
                char a = ss.top();
                ss.pop();
                char b = ss.top();
                ss.pop();
                if(a != 'b' || b != 'a')
                {
                    return false;
                }
            }
        }

        return ss.empty();
    }
};

//this problem is solved by using stack.
// if the s[i] == 'a' or 'b' we will insert it on the stack
// when s[i] == 'c' we will pop out both char from the stack, before doing it we will check if our stack size is less than 2 we will return false;
// after that again we will check the sequence for "abc".. for that char a supposed to be 'b' and char b supposed to be 'c' if not return false;
//at the end return the result
//for better understanding use paper and pen and follow the algorithm.
