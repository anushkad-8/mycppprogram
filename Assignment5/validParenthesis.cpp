/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.*/
#include<bits/stdc++.h>

using namespace std;

bool isValid(string s)
{
    char ch;
    int top=-1;
    
    int length=s.length();
    stack <char> st;
    for(int i=0;i<length;i++)
    {
        ch=s[i];
        //first we'll chek wheher the element we are pushing is the opening bracket

        if(ch=='(' || ch=='[' || ch=='{')
        st.push(ch);

        else
        {
            if(st.empty() || ch == ')' && st.top() != '(' || ch == ']' && st.top() != '[' || ch == '}' && st.top() != '{') 
            return false;
            // if the stack is still empty(no opening bracket before) or the closing brackets dont match the opening brackets we are returning false

            st.pop();
        }
    }

    return st.empty();
}

int main()
{
    cout<<"Enter the string to check."<<endl;
    string s;
    cin>>s;
    if(isValid(s))
    cout<<"Valid Parenthesis!"<<endl;
    else

    cout<<"Invalid Parenthesis!"<<endl;
    return 0;
}
