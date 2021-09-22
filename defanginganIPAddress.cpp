#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string address = "255.100.50.0";
    int l = address.length();
    string s = "";

    for(int i = 0; i < l; i++)
    {
        char c = address[i];
        if(c == '.')
        {
            s = s + "[.]";

        }else
        {
            s = s + c;
        }
    }
    cout << s << endl;
}
