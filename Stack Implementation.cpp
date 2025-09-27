// Vaishnavi Pangare
// 25070123501

#include <iostream>
using namespace std;

#define MAX 100

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    bool isFull() {
        return top == MAX - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack overflow! Cannot push " << value << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed to stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow! Cannot pop." << endl;
            return;
        }
        cout << arr[top--] << " popped from stack." << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack;
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.display();
                break;
            case 4:
                cout << "Exited out" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

// OUTPUT
// Menu:
// 1. Push
// 2. Pop
// 3. Display
// 4. Exit
// Enter your choice: 1
// Enter value to push: 10
// 10 pushed to stack.

// Menu:
// 1. Push
// 2. Pop
// 3. Display
// 4. Exit
// Enter your choice: 1
// Enter value to push: 20
// 20 pushed to stack.

// Menu:
// 1. Push
// 2. Pop
// 3. Display
// 4. Exit
// Enter your choice: 3
// Stack elements: 20 10 

// Menu:
// 1. Push
// 2. Pop
// 3. Display
// 4. Exit
// Enter your choice: 2
// 20 popped from stack.

// Menu:
// 1. Push
// 2. Pop
// 3. Display
// 4. Exit
// Enter your choice: 3
// Stack elements: 10 

// Menu:
// 1. Push
// 2. Pop
// 3. Display
// 4. Exit
// Enter your choice: 4

// Exited out
