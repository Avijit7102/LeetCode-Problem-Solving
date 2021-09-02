#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    vector <int>pushed = {1,2,3,4,5}, popped = {4,5,3,2,1};
    stack <int> s;
    int l = pushed.size();
    int j = 0;
    for(int i = 0; i < l; i++)
    {
        s.push(pushed[i]);
        while(!s.empty() && s.top() == popped[j])
        {
            s.pop();
            j++;
        }
    }

    cout << (s.empty()?"true":"false") << endl;
}

//We will declare a stack called s to store our data.
//we will continue pushing value from pushed vector until it is equal to popped[0] (at first)
//when it is equal we will gonna pop out most top value from the stack s. we will continue do that until it stack becomes empty and top of stack value == our popped[j] value,
//first we set the J = 0 so that we can get the first element of popped vector.
//after that when It will insert into loop we will catch the flow of other elements from the popped vector by incrementing j value by 1.
//at the end we will return/cout true if stack is empty otherwise it will return/cout false.
