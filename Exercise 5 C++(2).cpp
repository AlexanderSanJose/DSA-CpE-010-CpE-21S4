//Each code Example programs shall run independently

//Example 1
#include <iostream>
#include <stack>
using namespace std;
void display(stack<string>pl);
int main(){
    stack<string>pl;
    cout<<"Push elements into stack: "<< endl;
    //add items to the stack
    pl.push("C++");
    pl.push("Java");
    pl.push("Python");
    cout<<("Initial stack:")<<endl;
    display(pl);
    pl.pop();
    cout<<("Final stack:")<<endl;
    display(pl);
return 0;
}
void display(stack<string>pl){
    while(!pl.empty()){
        cout<<pl.top()<< endl;
        pl.pop();
    }
   
}


//Example 2
#include <iostream>
#include <stack>
using namespace std;

void display(stack<string> pl); // Pass by value (copy of stack)

int main() {
    stack<string> pl;
    cout << "Push elements into stack: " << endl;
    
    // Items to the stack
    pl.push("C++");
    pl.push("Java");
    pl.push("Python");
    
    cout << "Initial stack:" << endl;
    display(pl);  // This will display "Python", "Java", "C++"
    
    // Pop the top two elements and store them temporarily
    string topElement1 = pl.top();
    pl.pop();  // Pops "Python"
    
    string topElement2 = pl.top();
    pl.pop();  // Pops "Java"
    
    // Pop "C++", which is the bottom element
    pl.pop();  // Pops "C++"
    
    // Push back "Java" and "Python" to retain the correct order
    pl.push(topElement2);  // Pushes "Java"
    pl.push(topElement1);  // Pushes "Python"
    
    cout << "Final stack:" << endl;
    display(pl);  // This will now display "Python" and "Java"
    
    return 0;
}

void display(stack<string> pl) {
    // Creates a copy of the stack and pops elements off for display
    while (!pl.empty()) {
        cout << pl.top() << endl;
        pl.pop();
    }
}


//Example 3
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> queue;
    queue.push("Python");
    queue.push("Java");
    queue.push("C++");
   

    cout << "Queue elements:" << endl;
    while (!queue.empty()) {
        cout << queue.front() << endl;
        queue.pop();
    }

    cout << "The Queue is empty!" << endl;

    return 0;
}