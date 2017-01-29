#include <iostream>

void print(int value) {
	std::cout << "Int: " << value << std::endl;
}

void print(void* value) {
	std::cout << "Pointer: " << value << std::endl;
}

int main() {
	void* ptr;
	print(9);
	print(ptr);
	print(NULL);
	return 0;
}