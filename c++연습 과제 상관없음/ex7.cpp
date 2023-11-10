#include<iostream>
using namespace std;

int main() {
	int arr[10];
	
	for (int& a : arr) {
		cin >> a;

	}
	cout << arr[2] << endl;
}