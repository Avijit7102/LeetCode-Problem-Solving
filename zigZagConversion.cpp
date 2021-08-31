#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "PAYPALISHIRING", res = "";
    int numRows = 3,interval = 2*numRows -2, l = s.length();

    if(numRows == 1)
    {
        cout << s << endl;
        return 0;
    }

    for(int i = 0; i < numRows; i++)
    {
        for(int j = i; j < l; j+= interval)
        {
            res = res + s[j];
            if(i > 0 && i < numRows-1 && j + interval - 2 * i < l)
            {
                int a = j + interval - 2 * i;
                res = res + s[a];
            }
        }
    }
    cout << res << endl;
}

//zigzag of PAYPALISHIRING and numRows = 4 is:
//P     I    N
//A   L S  I G
//Y A   H R
//P     I

//Here if we mark our string by index than it comes like that way: P A Y P A L I S H I R  I  N  G
//                                                                 0 1 2 3 4 5 6 7 8 9 10 11 12 13
//ZigZag pattern by index will be:
//0     6    12
//1   5 7  11 13
//2 4   8 10
//3     9

//Now think about the interval/distance, you can see on 1st and last row, distance or interval between two index is 6.
//Now the question is how you will gonna find it? here distance on 1st row 0 to 6 = 6 than 6 to 12 = 6. formula is number of rows * 2 - 2 or 2 * (number of row - 1)
//For better clarification look on the zigzag patter by index on above:
//0 to down until 3 than up to 6 how many step you crossed? that is 1,2,3,4,5 than 6. so total 6. Here we can find distance.
//now find out other distance.
//We can face problem on the rows which one is not the 1st and last row. On the second row the extra index are 5 and 11. Distance are 1 to 5 = 4 and 7 to 11 = 4
//Don't worry about index 7 and 13. Because here the distance is same as 1st and last row and that is 6.
//So, For index 5 and 11, here j = i = 1. Formula will be j + interval - 2 * i
//Here 2 * i for each time we are going down 2 times with row. Here i indicates row.
//Now, work for 3rd row with the index 4 and 10 with that formula.
