#include<iostream>

namespace s1 {
	int k = 0;
	void Output() {
		std::cout << "k = " << k << std::endl;
	}
}

int main() {
	int k = 0;

	using namespace s1;

	k++;
	s1::k++;
	Output();
	return 0;
}
