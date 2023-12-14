#include<iostream>
using namespace std;
int main() {
	char str2[10] = "KNOU";
	char str1[3] = "cs";
	strcat_s(str2, 10, str1);
	cout << str2 << endl;


}