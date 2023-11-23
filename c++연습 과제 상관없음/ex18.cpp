#include<iostream>
using namespace std;

int main() {
	char str[] = "happy";
	cout << str << endl;
	char str1[] = { 'h','a','p','p','y',0 };
	cout << str1 << endl;
	char str2[6] = { 'h','a','p','p','y',0 };
	cout << str2 << endl;
}