#include <iostream>
#include <vector>

using namespace std;



void countGrid(vector<vector<int>> &grid, int x, int y, int r, int c, int &count)
{
    if(x < 0 || x >= r || y < 0 || y >= c || grid[x][y] != 1)
        {
            return;
        }
        grid[x][y] = 2;

        count++;

        countGrid(grid, x+1, y, r, c, count);
        countGrid(grid, x-1, y, r, c, count);
        countGrid(grid, x, y+1, r, c, count);
        countGrid(grid, x, y-1, r, c, count);
}
int main()
{
    vector<vector<int>> grid = {
        {0,0,1,0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,0,0,0,1,1,1,0,0,0},
        {0,1,1,0,1,0,0,0,0,0,0,0,0},
        {0,1,0,0,1,1,0,0,1,0,1,0,0},
        {0,1,0,0,1,1,0,0,1,1,1,0,0},
        {0,0,0,0,0,0,0,0,0,0,1,0,0},
        {0,0,0,0,0,0,0,1,1,1,0,0,0},
        {0,0,0,0,0,0,0,1,1,0,0,0,0}
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
                countGrid(grid, i, j, row, col, count);
                maxCount = max(count, maxCount);
                count = 0;

            }
        }
    }

    cout << maxCount << endl;
}
