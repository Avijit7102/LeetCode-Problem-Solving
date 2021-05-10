#include<iostream>
#include<string>
#include <stdio.h>
using namespace std;

int main()
{
    string haystack, needle;
    getline(cin, haystack);
    getline(cin, needle);
    int found = haystack.find(needle);
    cout << found;
    //if(haystack.find)
}
