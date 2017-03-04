#include <iostream>

class Father
{
public:
	virtual int sum(int a, int b) const {return a+b;}
};

class Son : public Father
{
public:
	virtual int sum(int a, int b) {return 2;}
};

int main() {
	std::unique_ptr<Father> ptr(new Son());
	// The following should print 2 as we expect Son's sum to be used...
	std::cout << ptr->sum(2,2) << std::endl;
	return 0;
}
