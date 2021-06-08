#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string num1 = "12349", num2 = "347898";

    int l1 = num1.length() - 1;
    int l2 = num2.length() - 1;
    int carry = 0;
    string result;
    cout << l1 << " " << l2 << endl;
    if(num1.length() < num2.length())
    {
        string s = num1;
        num1 = num2;
        num2 = s;
    }
    while(l1 >= 0 || l2 >= 0)
    {
        int sum = carry;
        if(l1 >= 0)
        {
            sum = sum + num1[l1--]-'0';
        }
        if(l2 >= 0)
        {
            sum = sum + num2[l2--]-'0';
        }
        if(sum > 9)
        {
            carry = sum / 10;
        }
        else
        {
            carry = 0;
        }
        result += to_string(sum % 10);

        cout << result << endl;
    }
    if(carry!=0) result+=to_string(carry);
    reverse(result.begin(),result.end());
    cout << "Result : " << result << endl;
    //cout << num1 << " " << num2 << endl;
}
