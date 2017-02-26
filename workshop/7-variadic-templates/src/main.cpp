#include <iostream>

template<typename T>
T sum(T a)
{
	return a;
}

template<typename T>
T sum(T a, T b)
{
	return a + sum<T>(b);
}

template<typename T>
T sum(T a, T b, T c)
{
	return a + sum<T>(b, c);
}

template<typename T>
T sum(T a, T b, T c, T d)
{
	return a + sum<T>(b, c, d);
}

template<typename T>
T sum(T a, T b, T c, T d, T e)
{
	return a + sum<T>(b, c, d, e);
}

template<typename T>
T sum(T a, T b, T c, T d, T e, T f)
{
	return a + sum<T>(b, c, d, e, f);
}

int main() {
	std::cout << "1 + 2 = " << sum<int>(1, 2) << std::endl;
	std::cout << "1 + 2 + 3 = " << sum<int>(1, 2, 3) << std::endl;
	std::cout << "1 + 2 + 3 + 4 = " << sum<int>(1, 2, 3, 4) << std::endl;
	std::cout << "1 + 2 + 4 + 4 + 5 = " << sum<int>(1, 2, 3, 4, 5) << std::endl;
	std::cout << "1 + 2 + 4 + 4 + 5 + 6 = " << sum<int>(1, 2, 3, 4, 5, 6) << std::endl;
	return 0;
}
