# Assignment 1 Part 2
## Zhichao Chen and Bryce Russell-Benoit

### **Object**

***Object()***
The default constructor for an Object.

***~Object()***
Deconstructor for an Object

***bool equals(Object\* that)***
Determines if this object is equal to the given object

***size_t hash()***
Hashes the Object

### **Queue**

***Queue() : Object()***
This is the default constructor that should make a Queue of a default length. so Queues can be 
created quickly and easily.

***Queue(size_t size) : Object()***
This constructor takes in a *size_t* that should determine the size of the Queue.

***~Queue()***
This is the deconstuctor for the class. To make sure there are no data leaks

***bool equals(Object\* that)***
Determines if this Queue is equal to the given Queue and all items are the same in the same order.
It's always helpful to have a comparison method..

***size_t hash()***
Hashes the queue, always helpful for an object to have.

***void enqueue(Object\* o)***
Adds the given Object to the Queue.

***Object dequeue()***
Returns and removes the next Object from the queue.

***Object peek()***
Returns the next Object from the queue without removing.

***size_t allocated_size()***
Returns the number of spaces allocated for the Queue.

***size_t current_size()***
Returns the number of Objects currently in the Queue.

***bool isFull()***
Determines whether the Queue is full.

***bool isEmpty()***
Determines whether the Queue is empty.

***void clear()***
Clears the Queue of all items.