#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "leEeetcode";
    string ss="";

    int l = s.length();
    if(l == 1 || l == 0)
    {
        //return s;
;        cout << "empty";
    }
    for(int i = 0; i < l; i++)
    {
        if(ss.length() > 0 && (ss.back() - s[i] == 32 || ss.back() - s[i] == -32))
           {
               ss.pop_back();
           }
            else
            {
                ss.push_back(s[i]);
            }
    }
    cout << ss << endl;
}
//Logic behind this problem is:
//We are taking an empty string first.We will add char on new string from the original string.
//First think about which char we need to take out
//if one char is lower case like 'a' and the next char is upper case like 'A' but they are same. We need to takeout both char from the original string.
//It could be first char uppercase like 'A' and the next char is lower case like 'a', On that time We need to takeout both char from the original string.
//New string will return our result from the original string.
//We will take out only one char one time from the new string if new string's length > 0 and last char of new string is same but case different. Otherwise, we will add char on new string.
//Here back function return the last char of string, pop_back function remove the last char, and push_back function add char on next index.
//Like example if original string is "Pp". Our new string ss will return empty string.
//Reason: for s = "Pp" inside the loop first if condition is false because ss is empty. So it will go to else and insert 'P' char
//Next if condition is true because length of ss is grater than 0 and ss.back() - s[i] --> 'P' - 'p' --> 80 - 112 = -32
//So it will pop_back our last char of ss which was 'P'
//Base case if our original string's length is 1 or 0 will return the original one.
