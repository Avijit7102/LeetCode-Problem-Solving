#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string s = "][][";
    int close = 0, maxClose = 0, l = s.length();

    for(int i = 0; i < l; i++)
    {
        char c = s[i];

        if(c == '[')
        {
            close-= 1;
        }
        else
        {
            close+= 1;
        }

        maxClose = max(close, maxClose);
        cout << maxClose << endl;

    }
    maxClose = maxClose + 1;
    int ans = maxClose / 2;
    cout << ans << endl;
    return 0;
}
//https://www.youtube.com/watch?v=3YDBT9ZrfaU
//Great explanation
