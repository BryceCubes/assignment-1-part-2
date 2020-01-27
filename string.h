//lang::CwC
#pragma once
#include "object.h"

class String : public Object {
public:
	// Default constructor
	String() : Object() {
	}

	String(const char* value) : Object() {=
	}

	// Destructor
	virtual ~String() {}

	virtual bool equals(Object* that) {
	}

	virtual size_t hash() {
	}

	const char* get_string() {
	}

	size_t get_length() {
	}
};
