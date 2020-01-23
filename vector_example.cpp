#include <iostream>
#include <vector>

int main() {
	std::vector<int> v1;

	for(int i=0; i<5; i++) {
		v1.push_back(i);
	}

	//for(std::vector<int>::iterator j=v1.begin(); j != v1.end(); j++) {
	for(auto j=v1.begin(); j != v1.end(); j++) {
		std::cout << *j << " ";
	}
	std::cout << std::endl;

	std::vector<int> v2;
	v2.reserve(v1.size());

	for(auto j : v1) {
		v2.push_back(j);
	}

	std::cout << "v2 is " << std::endl;
	for(auto x : v2) {
		std::cout << x << " ";
	}
	std::cout << std::endl;

	return 0;
}




