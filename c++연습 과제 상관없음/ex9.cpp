#include <iostream>
using namespace std;
int MaxNum(const int arr[], int n) {
	int Max = arr[0];
	for (int i = 1; i < n; i++) {
		if (Max < arr[i]) {
			Max = arr[i];
		}
	}

	return Max;
}

int main() {
	int arr[5] = { 1,4,7,8,2 };
	cout << MaxNum(arr, 5) << endl;
}