class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag = 0;
        for(int i = digits.size()-1; i >= 0; i--)
        {
            if(digits[i] == 9)
            {
                digits[i] = 0;
                flag = 1;

            }
            else
            {
                digits[i]++;
                flag = 0;
                break;

            }
        }
        if(flag == 1)
        {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};
