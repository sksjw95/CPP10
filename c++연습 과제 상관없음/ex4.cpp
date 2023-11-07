#include<iostream>
using namespace std;

int main() {
	char ch;
	switch (ch) {
	case 'e':
		cout << "동쪽으로 이동" << endl;
		break;
	case 'w':
		cout << "서쪽으로 이동" << endl;
		break;
	case 's':
		cout << "남쪽으로 이동" << endl;
		break;
	case 'n':
		cout << "북쪽으로 이동" << endl;
		break;
	}
}