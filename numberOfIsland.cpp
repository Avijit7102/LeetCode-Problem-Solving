#include <iostream>
#include <vector>

using namespace std;



void countGrid(vector<vector<int>> &grid, int x, int y, int r, int c)
{
    if(x < 0 || x >= r || y < 0 || y >= c || grid[x][y] != 1)
        {
            return;
        }
        grid[x][y] = 2;


        countGrid(grid, x+1, y, r, c);
        countGrid(grid, x-1, y, r, c);
        countGrid(grid, x, y+1, r, c);
        countGrid(grid, x, y-1, r, c);
}
int main()
{
    vector<vector<int>> grid = {
        {1,1,0,0,0},
        {1,1,0,0,0},
        {0,0,1,0,0},
        {0,0,0,1,1}
    };
    int row = grid.size();
    int col = grid[0].size();
    int count = 0, maxCount = 0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(grid[i][j] == 1)
            {
                count++;
                countGrid(grid, i, j, row, col);
                maxCount = max(count, maxCount);

            }
        }
    }

    cout << count << endl;
}

