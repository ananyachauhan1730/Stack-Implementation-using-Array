#include <iostream>
using namespace std;

#define SIZE 5
#define ERROR -9999

class Stack {
    int top, ar[SIZE];
public:
    Stack() {
        top = -1;
    }

    void push(int num) {
        if (top == SIZE - 1) {
            cout << "STACK OVERFLOW: Stack is full" << endl;
        } else {
            ar[++top] = num;
        }
    }

    int pop() {
        if (top == -1) {
            cout << "STACK UNDERFLOW: Stack is empty" << endl;
            return ERROR;
        } else {
            return ar[top--];
        }
    }

    int peak() {
        if (top == -1) {
            cout << "STACK UNDERFLOW: Stack is empty" << endl;
            return ERROR;
        } else {
            return ar[top];
        }
    }

    void disp() {
        if (top == -1) {
            cout << "STACK UNDERFLOW: Stack is empty" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << ar[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s1;
    int val, top;

    s1.push(7);
    s1.push(10);
    s1.push(4);

    val = s1.pop();
    cout << "Popped value: " << val << endl;

    top = s1.peak();
    cout << "Top value: " << top << endl;

    s1.disp();

    return 0;
}

//output
//Popped value: 4
//Top value: 10
//Stack elements: 7 10
