class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>v = {{1}};

        for(int i = 1; i < rowIndex+1; i++)
        {
            vector<int> v1;
            v1.push_back(1);

            for(int j = 1; j <= i - 1; j++)
            {
                v1.push_back(v[i-1][j-1] + v[i-1][j]);
            }
            v1.push_back(1);
            v.push_back(v1);
        }
        vector<int>v2;

        for(int i = 0; i < v[rowIndex].size(); i++)
        {
            v2.push_back(v[rowIndex][i]);
        }

        return v2;
    }
};
