#include <iostream>
using namespace std;

#define MAX 5 
class Stack 
{
    int top;
    int arr[MAX];

public:
    Stack() { top = -1; }

    // To push an element onto the stack
    void push(int value) 
	{
        if (top >= MAX - 1) 
		{
            cout << "Overflow.\n";
        } else
		{
            arr[++top] = value;
            cout << value << " has been inserted completely.\n";
        }
    }
     // Too pop an element from the stack
    void pop() {
        if (top < 0) {
            cout << "Underflow.\n";
        } else {
            cout << arr[top] << " is being deleted\n";
            top--;
        }
    }

    //To function display the element 
    void display() {
        if (top < 0) {
            cout << "The Stack is empty.\n";
        } else {
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() 
{
    Stack stack;


    stack.push(10);
    stack.push(24);
	stack.push(28);
	stack.push(32);
	stack.push(30);

    stack.display();

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
 

    return 0;
}
