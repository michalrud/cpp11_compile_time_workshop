#include "external_lib.hpp"
#include <iostream>
#include <vector>

int main() {
	const size_t ARRAY_SIZE = sizeof(MY_RANDOM_CONSTANT)/sizeof(unsigned int);
	std::vector<unsigned int> myconst(ARRAY_SIZE);
	for (size_t i = 0; i < ARRAY_SIZE; ++i)
	{
		myconst[i] = MY_RANDOM_CONSTANT[i];
	}
	auto minmax = std::minmax_element(myconst.begin(), myconst.end());
	std::cout << "Minimum: " << *minmax.first << std::endl;
	std::cout << "Maximum: " << *minmax.second << std::endl;
	return 0;
}