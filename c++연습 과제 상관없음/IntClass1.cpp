#include <iostream>
class IntClass1 {
	int a;
public:
	IntClass1(int n = 0):a(n){}
	IntClass1& operator++() {
		++a;
		return *this;
	}
	int getValue()const { return a; };




};