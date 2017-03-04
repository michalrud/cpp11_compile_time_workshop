#include <iostream>
#include <set>

auto add(int a, int b) -> int {
	return a + b;
}
double add(double a, double b) {
	return a + b;
}
long add(long a, long b) {
	return a + b;
}

int main() {
	std::cout << "int : " << add((int) 1, (int) 1) << std::endl;
	std::cout << "double : " << add((double) 1, (double) 1) << std::endl;
	std::cout << "long : " << add((long) 1, (long) 1) << std::endl;
	// having that working would be cool:
	// std::cout << "long + double: " << add((long) 1, (double) 1) << std::endl;
	return 0;
}
