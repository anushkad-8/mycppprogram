/*First, we create an empty stack and an empty postfix expression
2.	Next, we iterate through the infix expression from left to right and append operands to the postfix expression
3.	If an operator is encountered, we pop operators from the stack and append them to the postfix expression until an operator with lower or equal precedence is found
4.	The current operator is then pushed onto the stack
5.	If a left parenthesis is encountered, we push it onto the stack
6.	If a right parenthesis is encountered, we pop operators from the stack and append them to the postfix expression until a left parenthesis is found
7.	Finally, we pop any remaining operators from the stack and append them to the postfix expression */

#include <bits/stdc++.h>
using namespace std;

class Conversion {
private:
    stack<char> s;
    string infixExp;
    string postfixExp; 

public:    
    int precedence(char op) 
    {
        if (op == '+' || op == '-')
            return 1;
        if (op == '*' || op == '/')
            return 2;
        return 0;
    }//now we have checked for precedence of operators

    
    bool isOperator(char c) 
    {
        return c == '+' || c == '-' || c == '*' || c == '/';
    }//whether given token is operator or not

    bool isNum(char c)
    {
        int x=c;
        if(x<=57 && x>=48)
        return true;
        else return false;

    }

public:
    
    Conversion(string infix) 
    {
        infixExp = infix;
        postfixExp = "";
    }

    
    void Conv() {
        for (int i = 0; i < infixExp.length(); i++) {
            char c = infixExp[i];

            if (isNum(c)) {
                postfixExp += c;
            }// check for token is number

            // If the character is '(', we push it to stack
            else if (c == '(') {
                s.push(c);
            }
            // If the character is ')', pop and append until '(' is found
            else if (c == ')') {
                while (!s.empty() && s.top() != '(') {
                    postfixExp += s.top();
                    s.pop();
                }
                if (!s.empty() && s.top() == '(') {
                    s.pop();
                }
            }
            // If the character is an operator
            else if (isOperator(c)) {
                while (!s.empty() && precedence(s.top()) >= precedence(c)) {
                    postfixExp += s.top();
                    s.pop();
                }
                s.push(c);
            }
        }

        // Pop all remaining operators from the stack
        while (!s.empty()) {
            postfixExp += s.top();
            s.pop();
        }
    }//conversion is done now

    
    void displayPostfix() {
        cout << "Postfix Expression: " << postfixExp << endl;
    }
};

int main() {
    string infix = "5*2+3-(4/2)"; 
    Conversion conv(infix);
    conv.Conv();
    conv.displayPostfix();
    return 0;
}
