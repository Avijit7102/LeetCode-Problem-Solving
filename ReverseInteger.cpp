class Solution {
public:
    int reverse(int x) {
        long num = 0, rem;
        while(x)
        {
            rem = x % 10;
            num = num * 10 + rem;
            x = x / 10;
        }
        if(num >= INT_MIN && num <= INT_MAX)
        {
            return num;
        }
        else
        {
            return 0;
        }

    }
};
