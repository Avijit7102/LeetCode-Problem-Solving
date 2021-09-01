class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++)
        {
            for(int j = 0; j < arr.size(); j++)
            {
                if(i != j && arr[i] == 2 * arr[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};
// Logic  are:
//More formally check if there exists two indices i and j such that :

//i != j
//0 <= i, j < arr.length
//arr[i] == 2 * arr[j]
