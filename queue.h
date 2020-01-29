//lang::CwC
#pragma once

#include "object.h"

class Queue : public Object {
public:

	// Default constructor
	Queue() : Object() {}

	// Constructs Queue of the given size
	Queue(size_t size) : Object() {}

	// Destructor
	virtual ~Queue() {}

	// Determines if this Queue is equal to the given queue
	virtual bool equals(Object* that) {}

	// Hashes the queue 
	virtual size_t hash() {}

	// Adds the given Object to the Queue
	virtual void enqueue(Object* o) {}

	// Gets and removes the next Object from the Queue
	virtual Object* dequeue() {}

	// Gets the next Object from the Queue without removing it
	virtual Object* peek() {}

	// Gets the allocated size of the Queue
	virtual size_t allocated_size() {}

	// Gets the totala number of elements in the Queue
	virtual size_t current_size() {}

	// Determines if the Queue is full
	virtual bool isFull() {}

	// Determines if the Queue is empty
	virtual bool isEmpty() {}

	// Clears the queue of all elements
	virtual void clear() {}
};

class StrQueue: public Queue {
  // Default constructor
	StrQueue() : Queue() {}

	// Constructs Queue of the given size
	StrQueue(size_t size) : Queue(size) {}

	// Destructor
	virtual ~StrQueue() {}
 
  // Adds the given String to the Queue
	virtual void enqueue(String* o) {}
  
  // Gets and removes the next String from the Queue
	virtual String* dequeue() {}
  
  // Gets the next String from the Queue without removing it
	virtual String* peek() {}
};