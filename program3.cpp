#include <iostream>

void print_num(float w, float x, float y, float z) {
	std::cout << "Values that were entered: " << std::endl
				<< "w: " << w+5 << std::endl << "x: " << x-15
				<< std::endl << "y: " << 9 << std::endl
				<< "z: " << -z << std::endl;

	return;
}

int main() {
	float a, b, c, d;

	std::cout << "Please enter four values seperated by spaces: ";
	std::cout << std::endl;

	std::cin >> b >> d >> a >> c;

	print_num(a, b, c, d);

	return 0;
}

