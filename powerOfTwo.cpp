class Solution {
public:
    bool isPowerOfTwo(int x) {
        if(x == 1)
        {
            return true;
        }
        if(x % 2 != 0 || x == 0)
        {
            return false;
        }
        return isPowerOfTwo(x/2);
    }
};
