class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> res(r,vector<int>(c));
        int a = mat.size(), b = mat[0].size(); //finding size of the matrix

        if(a * b != r * c) //checking
        {
            return mat;
        }
        int row = 0, col = 0;
        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0; j < mat[0].size(); j++)
            {
                res[row][col] = mat[i][j]; //initializing elements of the mat on new vector
                col++;
                if(col == c) // if col reaches to given c, start col from 0 again, and increment row,
                {
                    row++;
                    col = 0;
                }
            }
        }
        return res;
    }
};
