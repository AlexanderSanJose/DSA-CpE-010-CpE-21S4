#include <iostream>
using namespace std;

#define MAX 5 

class Queue 
{
    int front, rear;
    int arr[MAX];

public:
    Queue() { front = -1; rear = -1; }

    // enqueue an element into the queue
    void push(int value) 
    {
        if (rear >= MAX - 1) 
        {
            cout << "Overflow.\n";
        } 
        else 
        {
            if (front == -1) front = 0; // If thefirst element is added set front to 0
            arr[++rear] = value;
            cout << value << " has been inserted completely.\n";
        }
    }

    // dequeue an element from the queue
    void pull() 
    {
        if (front == -1 || front > rear) 
        {
            cout << "Underflow.\n";
        } 
        else 
        {
            cout << arr[front] << " is being deleted\n";
            front++;
        }
    }

    // To display the elements in the queue
    void display() 
    {
        if (front == -1 || front > rear) 
        {
            cout << "The Queue is empty.\n";
        } 
        else 
        {
            for (int i = front; i <= rear; i++) 
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() 
{
    Queue queue;

    queue.push(10);
    queue.push(24);
    queue.push(28);
    queue.push(32);
    queue.push(30);

    queue.display();

    queue.pull();
    queue.pull();
    queue.pull();
    queue.pull();
    queue.pull();

    return 0;
}
