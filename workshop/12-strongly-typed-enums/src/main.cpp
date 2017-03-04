#include <iostream>

enum CAR_COLOR {
	BLACK,
	BLUE,
	GREEN
};

enum FRUITS {
	GRAPE,
	APPLE,
	ORANGE
};

int main() {
	CAR_COLOR color_of_my_car = GREEN;
	if (color_of_my_car == ORANGE) {
		std::cout << "Your car is orange!" << std::endl;
	}
	return 0;
}
