# Assignment 1 Part 2
## Zhichao Chen and Bryce Russell-Benoit

### **Object**

***Object()***
The default constructor for a general Object.

***~Object()***
Destructor for an Object.

***bool equals(Object\* that)***
Determines if this object is equal to the given object. It's always helpful to be able to compare
objects to each other. This can be delegated down to child classes when implemented.

***size_t hash()***
Hashes the Object. This can similarly be delegated down for more tailored hashing but all objects
should have some method to hash itself.

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
This would take over comparison from Object and allow us to compare the content of this string with
the given object.

***size_t hash()***
This would take over hashing from the Object class to hash the entire queue.

***void enqueue(Object\* o)***
Adds the given Object to the Queue. Since that is a core function of a queue.

***Object dequeue()***
Returns and removes the next Object from the queue to cleanly grab the next item and keep the 
queue moving.

***Object peek()***
Returns the next Object from the queue without removing in case we need some information about the
next object without wanting to remove it from the queue.

***size_t allocated_size()***
Returns the number of spaces allocated for the Queue so we can easily check the capacity of the
Queue.

***size_t current_size()***
Returns the number of Objects currently in the Queue to find out how many items remain.

***bool isFull()***
Determines whether the Queue is full to prevent errors when adding to an already full queue.

***bool isEmpty()***
Determines whether the Queue is empty to know when we're done and prevent trying to pull another
item from the Queue.

***void clear()***
Clears the Queue of all items for when the remaining items are no longer needed. 