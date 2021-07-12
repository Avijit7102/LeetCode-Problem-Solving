//https://leetcode.com/problems/fibonacci-number/
// i declared an array with size 31 because on the problem statement there is a constraint 0 <= n <= 30.
#include<iostream>

using namespace std;

class Solution{
public:
    int fib(int n)
    {
        int arr[31] = {0};
        arr[0] = 0;
        arr[1] = 1;

        for(int i = 2; i <= n; i++)
        {
            arr[n] = arr[i - 1] + arr[i - 2];
        }
        return arr[n];
    }

};
int main()
{
    int num;
    cout << "Enter a number to find the Fibonacci : ";
    cin >> num;
    Solution ob;
    cout << ob.fib(num);
    return 0;
}
