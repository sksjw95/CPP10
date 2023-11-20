#include<iostream>
using namespace std;
int i = 0;
int main() {
	int i = 5;
	i++;
	::i++;
	cout << "local i = " << i << endl;
	cout << "nonlocal i = " << ::i << endl;
	return 0;
}