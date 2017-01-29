#pragma once

#include <iostream>
#include <set>
#include <cassert>

class MyObject {
public:
	MyObject() = default;
	MyObject(const MyObject& obj) {
		std::cout << "Copying MyObject..." << std::endl;
	}
	bool operator<(const MyObject& a) const {return false;}
	void print() const {
		std::cout << "hello" << std::endl;
	}
};

std::set<MyObject> getSet() {
	return std::set<MyObject> {
		MyObject()
	};
}