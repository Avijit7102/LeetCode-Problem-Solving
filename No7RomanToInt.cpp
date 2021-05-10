// c++ program
// convert roman number to integer number.
//leetCode problem no: 7
//...................................
/* For LeetCode submission
class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romanMap;
        romanMap = {{'I', 1}, {'V', 5},{'X', 10}, {'L', 50},{'C',100},{'D', 500},{'M', 1000}};

        int total = 0;

        char last = s[s.length()-1];
        int lastValue = romanMap[last];
        total = total + lastValue;

        for(int i = s.length()-2; i >= 0; i--)
        {
            char a = s[i];
            int value = romanMap[a];
            if(value >= lastValue)
            {
                total = total + value;
                lastValue = romanMap[a];
            }
            else
            {
                total = total - value;
                lastValue = romanMap[a];
            }
        }
        return total;
    }
}; */
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    map<char, int> romanMap;
    romanMap = {{'I', 1}, {'V', 5},{'X', 10}, {'L', 50},{'C',100},{'D', 500},{'M', 1000}};

    int sum = 0, total = 0;

    char last = s[s.length()-1];
    int lastValue = romanMap[last];
    total = total + lastValue;

    for(int i = s.length()-2; i >= 0; i--)
    {
        char a = s[i];
        int value = romanMap[a];
        if(value >= lastValue)
        {
            total = total + value;
            lastValue = romanMap[a];
        }
        else
        {
            total = total - value;
            lastValue = romanMap[a];
        }
    }
    cout << total << endl;
    return 0;
}
