#include<iostream>
using namespace std;

 void SwapValues(int& x, int& y)
{
	 x +=  y;
	y = x - y;
	x -= y;
}
int main() {
	int a = 10, b = 20;
	SwapValues(a, b);
	cout << a << " "
		<< b << endl;
	SwapValues(a, a);
	cout <<a<<" "
		<< b << endl;
	return 0;
}
