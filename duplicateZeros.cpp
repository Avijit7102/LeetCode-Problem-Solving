#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    vector<int> arr = {1,0,2,3,0,4,5,0};
    int s = arr.size();
    queue<int>q;

    for(int i = 0; i < s; i++)
    {
        if(arr[i] == 0)
        {
            q.push(0);
        }
        q.push(arr[i]);
    }
    int c = 0;
    while(!q.empty() && c < s)
    {
        //cout << q.front() << " ";
        arr[c] = q.front();
        q.pop();
        c++;
    }

    for(auto v: arr)
    {
        cout << v << " ";
    }
    cout << endl;
}
