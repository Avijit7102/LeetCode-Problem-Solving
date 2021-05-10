#include<iostream>
using namespace std;

int main()
{
    int dividend, divisor;
    cin >> dividend >> divisor;
    long count = 0,x,y;
        if(dividend == INT_MIN && divisor == -1)
        {
            int result = 2147483647;
            cout << result;
            return 0;
        }
        if(dividend == INT_MIN && divisor == 1)
        {
            int result = -2147483648;
            cout << result;
            return 0;
        }

        if(dividend == 0)
        {
            cout << "0" << endl;
            return 0;
        }
        if(divisor < 0)
        {
            y = -1;
            divisor = abs(divisor);
        }
        else
        {
            y = 1;
        }
        if(dividend < 0)
        {
            x = -1;
            dividend = abs(dividend);
        }
        else
        {
            x = 1;
        }
        while(dividend >= divisor)
        {
            //sum = sum + divisor;
            dividend = dividend - divisor;
            count++;
        }
        count = count * x * y;
        cout << count << endl;
        return 0;

}
