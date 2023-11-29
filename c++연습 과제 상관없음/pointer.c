#include<stdio.h>

int main() {
	int k[2] = { 7,5 };
	int* ptr;
	ptr = k;
	printf("%d \n", *ptr);
	ptr++;
	printf("%d \n", *ptr);
	return 0;

}