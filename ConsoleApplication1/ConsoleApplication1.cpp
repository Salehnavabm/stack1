#include <iostream>
#define MAX_SIZE 100

using namespace std;

class Stack {
private:
    int top;
    int data[MAX_SIZE];
public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(int value) {
        if (isFull()) {
            cout << "Error: pooreh!" << endl;
            return;
        }
        data[++top] = value;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Error: khalii!" << endl;
            return;
        }
        top--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Error: khalii!" << endl;
            return -1;
        }
        return data[top];
    }
};

int main() {
    Stack myStack;

    myStack.push(5);
    myStack.push(10);
    myStack.push(15);

    cout << "element: ";
    while (!myStack.isEmpty()) {
        cout << myStack.peek() << " ";
        myStack.pop();
    }

    return 0;
}