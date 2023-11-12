#include<iostream>
using namespace std;

float FahrToc(float fahr) {
	fahr -= 32;
	return fahr * 5 / 9;
}

int main() {
	float fTemp, cTemp;

	cout << "È­¾¾¿Âµµ : ";
	cin >> fTemp;
	cTemp = FahrToc(fTemp);
	cout << "--- > ¼·¾¾¿Âµµ : " << cTemp << endl;
	cout << fTemp << endl;
	return 0;
}