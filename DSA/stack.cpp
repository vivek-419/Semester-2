#include <iostream>
using namespace std;

const int MAX = 5;
int st[MAX], top = -1;


// Function declarations
void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

int main() {
    int val, option;

    do {
        cout << "\n ***** MAIN MENU *****";
        cout << "\n 1. PUSH";
        cout << "\n 2. POP";
        cout << "\n 3. PEEK"; 
        cout << "\n 4. DISPLAY";
        cout << "\n 5. EXIT";
        cout << "\n Enter your option: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                push(st, val);
                break;
            case 2:
                val = pop(st);
                if (val != -1)
                    cout << "Popped value: " << val << endl;
                break;
            case 3:
                val = peek(st);
                if (val != -1)
                    cout << "Top element is: " << val << endl;
                break;
            case 4:
                display(st);
                break;
            case 5:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid option! Try again.";
        }
    } while (option != 5);

    return 0;
}

// Function Definitions
void push(int st[], int val) {
    if (top == MAX - 1) {
        cout << "Stack is full, STACK OVERFLOW" << endl;
    } else {
        top++;
        st[top] = val;
    }
}

int pop(int st[]) {
    if (top == -1) {
        cout << "Stack is empty, STACK UNDERFLOW" << endl;
        return -1;
    } else {
        return st[top--];
    }
}

int peek(int st[]) {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return -1;
    } else {
        return st[top];
    }
}

void display(int st[]) {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << st[i] << " ";
        }
        cout << endl;
    }
}