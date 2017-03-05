class Noncopyable
{
public:
	Noncopyable() = default;
	~Noncopyable() = default;
private:
	Noncopyable(const Noncopyable& other) {}
	Noncopyable& operator=(const Noncopyable&) {}
};

int main() {
	Noncopyable a;
	// Following will not compile:
	// Noncopyable b = a;
	// Noncopyable c(a);
	return 0;
}
