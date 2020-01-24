//lang::CwC
#pragma once

class Object {
public:

	// Default constructor
	Object() {}

	// Destructor
	~Object() {}

	// Determines whether this object is equal to the given object
	virtual bool equals(Object* that) {}

	// Hashes this object
	virtual size_t hash() {}
};