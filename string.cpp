#include <iostream>
#include <string>

int main() {
	char s1[] = {'H', 'i'};
	char s2[] = "Hi";
	char *s3 = "Hi";

	std::string print1("Yello"), read_in;
	std::string print2 = "there!";
	print1[0] = 'H';

	std::cout << print1 << " " << print2 << std::endl;

	std::cout << "Please enter a string: ";
	std::cin >> read_in;
	std::cout << "The string you entered: " << read_in << std::endl;

	std::cout << "Size of string: " << print1.size() << std::endl;

	print1.clear();
	if(print1.empty()) {
		std::cout << "String is empty!" << std::endl;
	}
	else {
		std::cout << "String is not empty!" << std::endl;
	}

	return 0;
}
