#ifndef SAFEINTARRAY_H_INCLUDED
#define SAFEINTARRAY_H_INCLUDED
#include <iostream>
using namespace std;
class SafeIntArray {
	int limit; //원소의 개수
	int* arr; //데이터 저장공간 
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
	// i번째 원소를 반환하는 멤버함수
	int& operator[](int i) {
		if (i < 0 || i >= limit) {
			cout << "첨자가 범위를 벗어나 프로그램을 종료합니다.";
			exit(EXIT_FAILURE);
		}
		return arr[i];
	}
	int operator[](int i) const{
		if (i < 0 || i >= limit) {
			cout << "첨자가 범위를 벗어나 프로그램을 종료합니다.";
			exit(EXIT_FAILURE);
		}
		return arr[i];
	}

};
#endif 

