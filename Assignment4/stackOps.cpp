#include <bits/stdc++.h>
using namespace std;

class StackOperations {
private:
    int stack[5];
    int top;
    int size;

public:
    StackOperations() {
        top = -1;
        size = 5;
    }

    void push(int item) {
        if (top == size - 1) {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        stack[top] = item;
        cout << "Item " << item << " has been pushed inside the stack." << endl;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is already empty" << endl;
            return;
        }
        int x = stack[top];
        top--;
        cout << "Item " << x << " has been popped outside the stack." << endl;
    }

    void show() {
        cout << "The elements inside the stack are: " << endl;
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }

    void peek() {
        if (top == -1) 
        {
            cout << "Stack is empty" << endl;
            return;
        }
        int x = stack[top];
        cout << "The peek element is: " << x << endl;
    }

    void Operations() {
        int ch, item;
        cout << "1: push \n2: pop \n3: show \n4: peek \n5: stop" << endl;

        while (true) 
        {
            cout << "\nEnter your choice: ";
            cin >> ch;

            switch (ch) 
            {
                case 1:
                    cout << "Enter the element you want to push: ";
                    cin >> item;
                    push(item);
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    show();
                    break;
                case 4:
                    peek();
                    break;
                case 5:
                    cout << "You are out of the program" << endl;
                    return;
                default:
                    cout << "Invalid input. Try again!" << endl;
            }
        }
    }
};


int main() {
    StackOperations obj;
    obj.Operations();
    return 0;
}
