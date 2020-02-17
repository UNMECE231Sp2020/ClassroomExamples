#include <iostream>
#include <vector>

void scale_2(std::vector<float> *vect) {
	for(auto i = vect->begin(); i!=vect->end(); i++) {
		*i *= 2;
	}
	return;
}

void scale_by_2(std::vector<float> &vect) {
	for(auto &i : vect) {
		i *= 2;
	}
	return;
}

int main() {
	std::vector<float> something;
	something.push_back(6.5);
	something.push_back(3.9);
	something.push_back(1.2);
	something.push_back(8.3);

	scale_2(&something);
	scale_by_2(something);

	for(auto i : something) {
		std::cout << i << " ";
	}

	std::cout << std::endl;

	double q = 9.4878;
	double &y = q;
	//double *y = &q;
	std::cout << q << std::endl;
	//*y += 1.8;
	y += 1.8;
	std::cout << q << std::endl;

	return 0;
}









