class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        {
            return false;
        }
        long long rem, digit = 0;
        int num = x;
        while(x != 0)
        {
            rem = x % 10;
            digit = 10 * digit + rem;
            x = x / 10;
        }

        if(digit == num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
