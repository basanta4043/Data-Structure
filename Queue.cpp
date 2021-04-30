#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 10
 
class queue
{
    int *arr;       // array to store queue elements
    int capacity;   // maximum capacity of the queue
    int front;      // front points to the front element in the queue (if any)
    int rear;       // rear points to the last element in the queue
    int count;      // current size of the queue
 
public:
    queue(int size = SIZE);     // constructor
    ~queue();                   // destructor
 
    void dequeue();
    void enqueue(int x);
    int peek();
    int size();
    bool isEmpty();
    bool isFull();
};
 

queue::queue(int size)
{
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}
 

queue::~queue() {
    delete[] arr;
}
 

void queue::dequeue()
{
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
 
    cout << "Removing " << arr[front] << endl;
 
    front = (front + 1) % capacity;
    count--;
}
 
void queue::enqueue(int item)
{

    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
 
    cout << "Inserting " << item << endl;
 
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}
 
int queue::peek()
{
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    return arr[front];
}
 
int queue::size() {
    return count;
}
 
bool queue::isEmpty() {
    return (size() == 0);
}
 

bool queue::isFull() {
    return (size() == capacity);
}
 
int main()
{

    queue q(5);
 
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
 
    cout << "The front element is " << q.peek() << endl;
    q.dequeue();
 
    q.enqueue(4);
 
    cout << "The queue size is " << q.size() << endl;
 
    q.dequeue();
    q.dequeue();
    q.dequeue();
 
    if (q.isEmpty()) {
        cout << "The queue is empty\n";
    }
    else {
        cout << "The queue is not empty\n";
    }
 
    return 0;
}
