class Solution {
public:
    string reverseStr(string s, int k) {
        int l = s.size(); // length of string
        int K = k * 2; //
        for(int i = 0; i < s.size(); i += K)
        {
            if(l < k)
            {
                reverse(s.begin()+i, s.end());
            }
            else
            {
                reverse(s.begin()+i, s.begin()+i+k);
                l -= K;
            }
        }
        return s;
    }
};
// i += K because every time we are increment i value with i + k * 2, because we have to skip reversing for k char;
// for example abcd and k = 2
// l = 4; K = k * 2 = 4;
// entering into loop:
//i = 0; condition true -> if condition false, go for else condition
//reverse(0,0+0+2) ->reverse(string's index 0 to 2-1) -> after reverse it will be bacd and l = 4 - 4 = 0 and i = 4; loop condition is false
//try yourself with another example.

