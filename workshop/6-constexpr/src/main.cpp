int nthpower(const int a, const int n) {
	return (n == 1) ? a : a*nthpower(a, n-1);
}

int main() {
	for (unsigned int i = 0; i < 1000000; ++i) {
		// static_assert(3125 == nthpower(5, 5)); // can this be done?
		nthpower(5, 1);
	}
	return 0;
}
