#include<iostream>
using namespace std;
int main() {
	int a = 10;
	{
		int a = 20;
		{
			int a = 30;
		}
	}
	cout << a << endl;
}