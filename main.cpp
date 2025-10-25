#include <iostream>
#include <cstddef>

int main() {
	int a = 0; size_t count = 0;
	while (!std::cin.eof()) {
		std::cin >> a;
		if (std::cin.bad()) {
			return 1;
		}
		if (!std::cin.eof() && std::cin.fail()) {
			return 2;
		}
		++count;
	}
	std::cout << "Count = " << count-1 << std::endl;
	return 0;
}
