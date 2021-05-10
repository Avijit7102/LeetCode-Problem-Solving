/*
LeetCode Submission:
class Solution {
public:
    string intToRoman(int num) {
        vector <int> a = {1000, 900, 500, 400, 100, 90, 50, 40,10, 9, 5, 4,1};
        vector <string> s = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ss;
        while(num > 0)
        {
            for(int i = 0; i < a.size(); i++)
            {
                if(num >= a[i])
                {
                    string y = s[i];
                    cout << y << endl;
                    ss = ss + y;
                    num = num - a[i];
                    break;
                }
            }
        }
        return ss;
    }
}; */
#include<iostream>
#include<map>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    int num, count = 0;
    cin >> num;

    map<int,string> romanMap = {{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{10,"X"},{9,"IX"},{5,"V"},{1,"I"}};
    map<int,string>::iterator it;
    vector <int> a = {1000, 900, 500, 400, 100, 90, 50, 40,10, 9, 5, 4,1};
    vector <string> s = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string ss;
    vector<string>::iterator g;

    while(num > 0)
    {
        for(int i = 0; i < a.size(); i++)
        {
            if(num >= a[i])
            {
                string y = s[i];
                cout << y << endl;
                ss = ss + y;
                cout << "ss: " << ss << endl;
                //ss.push_back(y);
                num = num - a[i];
                cout << "num : " << num << endl;
                break;
            }
        }
    }

    cout << ss << endl;


}
