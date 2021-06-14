#include<iostream>
#include<string>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    string moves = "LL";
    for(int i = 0; i < moves.length(); i++)
    {
        if(moves[i] == 'L')
        {
            a++;
        }
        if(moves[i] == 'R')
        {
            b++;
        }
        if(moves[i] == 'U')
        {
            c++;
        }
        if(moves[i] == 'D')
        {
            d++;
        }
    }
    if(a == b && c == d)
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }
    return 0;
}
