#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int target;
    cin >> target;


    vector<int> v = {2,7,11,15};
    vector <int> result;

    int a = 0;
    int b = v.size()-1;

    while(a < b)
    {
        int sum = v[a]+ v[b];
        if(sum == target)
        {
            result.push_back(a+1);
            result.push_back(b+1);
            break;
        }
        else if(sum < target)
        {
            a++;
        }
        else
        {
            b--;
        }
    }

    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
}
