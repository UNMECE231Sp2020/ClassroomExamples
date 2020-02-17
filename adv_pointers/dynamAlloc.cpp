#include <iostream>

int main() {
	double *something = nullptr; //Instead of using NULL use nullptr
	something = new double[5];
	int *thing = new int;

	if((something==nullptr) || (i==nullptr)) {
		std::cout << "Error in allocating memory!" << std::endl;
		return -1;
	}

	std::cout << "Enter five values: ";
	for(int i=0; i<5; i++) {
		std::cin >> *(something + i);
	}

	std::cout << std::endl;
	for(int i=0; i<5; i++) {
		std::cout << *(something + i) << " ";
	}
	std::cout << std::endl;

	delete [] something;
	delete thing;
	return 0;
}










