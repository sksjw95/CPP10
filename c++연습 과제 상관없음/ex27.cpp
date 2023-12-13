#include<iostream>
using namespace std;
int main() {
	char a[10] = "KNOU";
	char b[5];
	strcpy_s(b, sizeof(b), a);
	cout << b << endl;
}