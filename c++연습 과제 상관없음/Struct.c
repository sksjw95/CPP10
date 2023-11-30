#include<stdio.h>


struct person {
		char name[20];
		int birth;
		double height;
		double weight;
	};
int main() {

	struct person m1 = { "ABC",1980,175.3,69.8 };
	printf("%s", m1.name);
}