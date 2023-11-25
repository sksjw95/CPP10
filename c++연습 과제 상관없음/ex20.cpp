#include<iostream>
using namespace std;
int main() {
	struct person {
		char name[20];
		int birth;
		double height;
		double weight;
	};

	person m1 = { "ABC",1980,175.3,69.8 };
	cout << m1.name << endl;
}