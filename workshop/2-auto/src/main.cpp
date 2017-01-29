#include <iostream>
#include <set>
#include "classes.hpp"

int main() {
	std::set<MyObject> s = std::move(getSet());
	for (std::set<MyObject>::const_iterator it = s.begin(); it != s.end(); ++it) {
		it->print();
	}
	return 0;
}