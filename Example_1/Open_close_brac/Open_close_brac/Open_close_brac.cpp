#include<stack>
#include<iostream>
using namespace std;

//this fuction will check our string's of brackets.
//I.E. if our condtioin is like this ()[]{} , [()]{}, {[()]} it will pass true value
// else condition is like this {(})[] it will pass false value


bool Check_brack(string S)
{
    //creating usefull local variables 
    stack<char> _stack; char _x;


    // it will traversing our given string by users  


    // how this loop going to work?
    /**  take a example if our input is like this ()[]{}.
         it will travers from left to right first it will pick " ( " and store it inside stack by help of push() method.
         now it will move to " ) ". here if the condition will not be satisfied and it will move to the switch case.
         inside the switch condition we are assigning value to Char _x from the top of the stack with the help of top() method.
         and with the pop() method we remove an item from the top of the stack.
         if condition finds wrong closing bracket it will return false and terminate the loop.
    */


    for (int i = 0; i < S.length(); i++)
    {

        if (S[i] == '(' || S[i] == '[' || S[i] == '{')
        {
            // pushing our all opening brackets to the stack
            _stack.push(S[i]);
            continue;
        }


        switch (S[i]) {
        case ')':

            // Assign the top element in local char _X 
            _x = _stack.top();

            // pop() method we remove an item from the top of the stack.
            _stack.pop();

            // condition finds wrong closing bracket it will return false and terminate the loop.
            if (_x == '{' || _x == '[')
                return false;

            break;

        case '}':

            _x = _stack.top();
            _stack.pop();

            if (_x == '(' || _x == '[')
                return false;

            break;

        case ']':

            _x = _stack.top();
            _stack.pop();

            if (_x == '(' || _x == '{')
                return false;

            break;

        default:
            return false;
        }
    }

    // Check Empty Stack
    return (_stack.empty());
}


int main()
{
    string s  /*= "{()}"*/;
    cout << "please insert pattern of opening and closing brackets!!!!!!! " << endl;

    cin >> s;

    Check_brack(s) ? cout << "Yes " : cout << "No";


    return 0;
}