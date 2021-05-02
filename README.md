
1. Stack

Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out),    where elements are inserted and extracted only from one end of the container.

The container shall support the following operations:

    • empty
    • size
    • push
    • pop
Functions

isEmpty()    Test whether container is empty

size()      Return size

push()      Insert element

pop()       Remove top element

peek()     The method returns the element at the top of the stack

Pseudocode:

Push()

step 1. Start

step 2. Push the elements into the stack

step 3. Check if the stack is full or not by comparing top with (MAX-1).

If the stack is full, then print "Stack Overflow".

step 4. Else, the stack is not full
Increment top by 1 and Set, a[top] = x
which pushes the element x into the address pointed by top.

step 5. Stop
3. Linked List
POP()

step 1. Start

step 2. Push the elements into the stack

step 3. Check if the stack is empty or not by comparing top
with base of array i.e. 0
If the stack is full, then print "Stack Overflow".

step 4. Else, If top is greater than zero the stack is not empty,
then store the value pointed by top in a variable x=a[top]
and decrement top by 1. The popped element is x.

step 5. Stop



PEEK()


Step 1: Start

3. Linked List
Step 2: Declare  Stack[MAX]


Step 3: Push the elements into the stack 


Step 4: Print the value stored in the stack pointed by top.

 
Step 6: Stop

COMPLEXITY:
Time Complexity:  push(), pop(), isEmpty() and peek() all take O(1) 
Space complexity: O(n)




2. QUEUE


The queue is a basic data structure just like a stack. In contrast to stack that uses the LIFO approach, queue uses the FIFO (first in, first out) approach. With this approach, the first item that is added to the queue is the first item to be removed from the queue. Just like Stack, the queue is also a linear data structure.

Basic Operations
The queue data structure includes the following operations:
    • EnQueue:Adds an item to the queue. Addition of an item to the queue is always done at the rear of the queue.
    • DeQueue:Removes an item from the queue. An item is removed or de-queued always from the front of the queue.
    • isEmpty:Checks if the queue is empty.
    • isFull:Checks if the queue is full.
    • peek:Gets an element at the front of the queue without removing it.

Enqueue

In this process, the following steps are performed:

      Step 1: Check if the queue is full.
      Step 2: If full, produce overflow error and exit.
      Step 3 :Else, increment ‘rear’.
      Step 4:Add an element to the location pointed by ‘rear’.
      Step 5:Return success.
Dequeue

Dequeue operation consists of the following steps:

      Step1 :Check if the queue is empty.
      Step 2: If empty, display an underflow error and exit.
      Step 3:Else, the access element is pointed out by ‘front’.
      Step 4: Increment the ‘front’ to point to the next accessible data.
      Step 5: Return success.
      
 COMPLEXITY:
Time Complexity:   O(1) 
Space complexity: O(n)

Linked List

    • Linked List can be defined as collection of objects called nodes that are randomly stored in the memory.
    • A node contains two fields i.e. data stored at that particular address and the pointer which contains the address of the next node in the memory.
    • The last node of the list contains pointer to the null.
    
Types of Linked List:

    • Singly Linked list
    • Doubly Linked list
    • Circular Linked list

Singly Linked list

It is the commonly used linked list in programs. If we are talking about the linked list, it means it is a singly linked list. The singly linked list is a data structure that contains two parts, i.e., one is the data part, and the other one is the address part, which contains the address of the next or the successor node. The address part in a node is also known as a pointer.


Doubly linked list

As the name suggests, the doubly linked list contains two pointers. We can define the doubly linked list as a linear data structure with three parts: the data part and the other two address part. In other words, a doubly linked list is a list that has three parts in a single node, includes one data part, a pointer to its previous node, and a pointer to the next node.

Circular linked list

A circular linked list is a variation of a singly linked list. The only difference between the singly linked list and a circular linked list is that the last node does not point to any node in a singly linked list, so its link part contains a NULL value. On the other hand, the circular linked list is a list in which the last node connects to the first node, so the link part of the last node holds the first node's address. The circular linked list has no starting and ending node. We can traverse in any direction, i.e., either backward or forward.


Time Complexity: O(1)
Space Complexity: O(n)

