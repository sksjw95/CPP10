#include <cstdio>

int sqSum(int& a, int& b) {
	a = a * a;
	b = b * b;
	return a + b;
}

int main() {
	int a = 2;
	int b = 3;
	int c = sqSum(a, a);
	printf("%d\n", c);
}

