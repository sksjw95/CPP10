#include<iostream>
using namespace std;

int main() {
	int arr[5] = { 2,3,9,4,7 };
	int sum = 0;
	int a = 0;
	for (int a:arr) {
		sum += a;
		cout << "ÇÕ°è = " << sum << endl;
	}
}