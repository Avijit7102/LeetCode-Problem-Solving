#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string text1 = "abcde", text2 = "ace";
    int n = text1.size(), m = text2.size();

        vector< vector<int> > dp(n+1, vector<int>(m+1));

        for(int i = 1; i < n+1; i++)
        {
            for(int j = 1; j < m+1; j++)
            {
                if(text1[i-1] == text2[j-1])
                {
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

    cout << dp[text1.size()][text2.size()] << endl;
    for(int c = 0; c < n+1; c++)
    {
        for(int d = 0; d < m+1; d++)
        {
            cout << dp[c][d] << " ";
        }
        cout << endl;
    }

    /* First we set 1st row and column with 0. It represents that either one string is empty or both string are empty. In that case,
length of the common subsequence is 0.

starting with a, it matches so we will take previous left diagonal element + length of the char. and if it does'not match,
we will take max of the above cell and left cell.
0 0 0 0
0 1 1 1
0 1 1 1
0 1 2 2
0 1 2 2
0 1 2 3

and we will return the last cell of our table.

for better understanding : https://www.youtube.com/watch?v=43P0xZp3FU4

*/

}

