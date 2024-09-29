//EXAMPLE 4
#include <iostream>
#include <stack>
using namespace std;
const int size = 3;  // Define the maximum size of the stack
void display(stack<string>);

int main() {
    stack<string> pl;
    cout << "Push elements into stack" << endl;

    pl.push("C++");
    pl.push("Java");
    pl.push("Python");
    cout << "Initial Stack: " << endl;
    display(pl);

    // Check if the stack is full by comparing the size with size
    if (pl.size() == size) {
        cout << "The stack is full!" << endl;
    }

    // Display the stack again after pushing all elements
    cout << "Final Stack: - " << endl;
    pl.push("C#"); //The element that is added
    if (pl.size() == size + 1) {
        cout << "Cannot push more elements, the stack is full" << endl;
    } else {
        display(pl);
    }
   
    return 0;
}

void display(stack<string>pl) {
    while (!pl.empty()) {
        cout << pl.top() << endl;
        pl.pop();
    }
}