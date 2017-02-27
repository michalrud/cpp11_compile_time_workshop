#include <iostream>
#include <vector>

template <typename T>
void print_elements(std::vector<T> elements) {
	for(const auto& current : elements) {
		std::cout << current << std::endl;
	}
}

int main() {
	print_elements<int>({0,1,2,3,4,5,6,7,8,9});
	return 0;
}