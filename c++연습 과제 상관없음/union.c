#include<stdio.h>
union uni {
	int i;
	char a;
	double f;
};
int main() {
	union uni k;
	k.f = 123456789.123456789;
	k.i = 1234;
	k.a = 'A';
	printf("%f\n", k.f);
	printf("%d\n", k.i);
	printf("%s\n", k.a);
	return 0;
}