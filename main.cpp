#include <iostream>
#include <cstddef>

bool isPyth(unsigned a, unsigned b, unsigned c) {
	bool p = (a*a + b*b) == c*c;
	p = p || (c*c + b*b) == a*a;
	p = p || (a*a + c*c) == b*b;
	return p;
}

int main() {
	using u_t = unsigned;
	u_t a = 0, b = 0, c = 0;
	std::cin >> b >> c;
	size_t count = 0;
	try {
	while (std::cin >> a) {
		count = isPyth(a, b, c) ? 1 : 0;
		c = b;
		b = a;
	}
	} catch (const std::logic_error &e) {
		std::cerr << e.what() << std::endl;
		return 2;
	}

	if (std::cin.eof()) {
		std::cout << count;
		std::cout << '\n';
	} else if (std::cin.fail()) {
		std::cout << "Error\n";
		return 1;
	}

	return 0;
}
