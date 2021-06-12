class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n = name.length();
        int m = typed.length();
        int i = 0,j = 0;
        int count = 0;
        while(i < n || j < m)
        {
            if(name[i] == typed[j])
            {
                i++;
                j++;
            }
            else if(i != 0 && name[i-1] == typed[j] )
            {
                j++;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
