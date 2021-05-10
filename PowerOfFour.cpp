
class Solution {
public:
    bool isPowerOfFour(int num) {
        while(num > 1)
        {
            if(num % 4 != 0)
            {
                return false;
            }
            else
            {
                num = num / 4;
            }
        }
        return num == 1;
    }
};
