#include <iostream>
#include <list>

int main() {
	std::list<int> mySet;
	mySet.push_back(1);
	mySet.push_back(2);
	mySet.push_back(3);
	mySet.push_back(4);
	mySet.push_back(5);
	mySet.push_back(6);
	mySet.push_back(7);
	mySet.push_back(8);
	mySet.push_back(9);
	mySet.push_back(10);
	mySet.push_back(11);
	mySet.push_back(12);
	for (const auto& current : mySet) {
		std::cout << current << std::endl;
	}
	return 0;
}