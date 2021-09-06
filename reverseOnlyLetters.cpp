#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s = "a-bC-dEf-ghIj";
    int l = s.length()-1;
    int r = 0;

    while(r <= l)
    {
        if(isalpha(s[r]) && isalpha(s[l]))
        {
            swap(s[r],s[l]);
            r++;
            l--;
        }
        if(!isalpha(s[r]))
        {
            r++;
        }
        if(!isalpha(s[l]))
        {
            l--;
        }

    }
    cout << s << endl;
}

// We are using two pointer method. l = total length - 1; // which indicates the last char in string. and r = the right most char in string.
// loop will run until right side <= left side. // you can say after the middle char comes loop wont work.
// if both right and left char are alphabet ,, we will swap those char and increment the right window (r) by 1. and left window(l) will be decremented by 1.
// if right side window char is not alphabet we will just increment it by 1. because we dont need to swap.
// same work we will do for left side window too.
