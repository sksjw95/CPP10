#include<iostream>
using namespace std;
int c{ 30 };
extern int a;
int main() {
	int c{ 20 }, d{ 30 };
	{
		int d{ 40 };
		int e{ 50 };
	}
	cout << a << endl;
}