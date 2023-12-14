#ifndef SAFEINTARRAY_H_INCLUDED
#define SAFEINTARRAY_H_INCLUDED
#include <iostream>
using namespace std;
class SafeIntArray {
	int limit; //������ ����
	int* arr; //������ ������� 
public:
	SafeIntArray(int n) :limit(n) {
		arr = new int[n];
	}
	~SafeIntArray() {
		delete[]arr;
	}
	int size()const {
		return limit;
	}
	// i��° ���Ҹ� ��ȯ�ϴ� ����Լ�
	int& operator[](int i) {
		if (i < 0 || i >= limit) {
			cout << "÷�ڰ� ������ ��� ���α׷��� �����մϴ�.";
			exit(EXIT_FAILURE);
		}
		return arr[i];
	}
	int operator[](int i) const{
		if (i < 0 || i >= limit) {
			cout << "÷�ڰ� ������ ��� ���α׷��� �����մϴ�.";
			exit(EXIT_FAILURE);
		}
		return arr[i];
	}

};
#endif 

