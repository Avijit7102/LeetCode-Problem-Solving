#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>>image  = {{1,1,0},{1,0,1},{0,0,0}};
    vector<vector<int>>result;
    for(int i = 0; i < image.size(); i++)
    {
        vector<int>v;
        for(int j = 0; j < image[i].size(); j++)
        {
            //int x = image[i][j];
            v.push_back(image[i][j]);
            //cout << image[i][j] << " ";
        }
        reverse(v.begin(), v.end());
        vector<int>vv;
        for(int k = 0; k < v.size(); k++)
        {
            if(v[k] == 0)
            {
                //vv[k] = 1;
                vv.push_back(1);
            }
            if(v[k] == 1)
            {
                vv.push_back(0);
            }
        }
        result.push_back(vv);
    }

    for(int i = 0; i < result.size(); i++)
    {
        for(int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
