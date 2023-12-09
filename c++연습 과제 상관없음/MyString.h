#ifndef MY_STRING_H_INCLUDED
#define MY_STRING_H_INCLUDED

#include <iostream>

class MyString {
	int len; // ���ڿ��� ����
	int bufSize; // ���� ������ ���ڿ��� ����
	char* buf;
	MyString(int s);

public:
	MyString();
	MyString(const char* str);
	MyString(const MyString& mstr);
	MyString(MyString&& mstr);
	~MyString();
	int length()const;
	MyString& operator=(const MyString& mstr);
	MyString& operator=(MyString&& mstr);
	//���ڿ� ���� ������
	MyString operator+(const MyString& mstr) const;
	MyString& operator+=(const MyString& mstr);

	// ==
	bool operator==(const MyString& mstr)const;
	// >
	bool operator>(const MyString& mstr) const;
	// <
	bool operator<(const MyString& mstr)const;

	char& operator[](int i);
	char operator[] (int i) const;
	friend std::ostream& operator<<(std::ostream& os,
		const MyString& mstr);
};

// ��Ʈ�� ��� ������
inline std::ostream& operator<<(std::ostream& os,
	const MyString& mstr) {
	os << mstr.buf;
	return os;
}
#endif
