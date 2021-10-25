#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int x = 3, y = 4;
    vector<vector<int>>points = {{3,4}};

    int result = -1;
    int dist = INT_MAX;

    for(int i = 0; i < points.size(); i++)
    {
        int a = points[i][0];
        int b = points[i][1];
        if(a == x || b == y)
        {
            int d = abs(x-a) + abs(y-b);
            if(d < dist)
            {
                dist = d;
                result = i;
            }

        }
    }
    cout << result << endl;
}

