#pragma once
class MyString
{
	char* str;
	int size;
	static int counterObject;
public:
	MyString();
	MyString(int size);
	MyString(const char* str);

	void input();
	void print();

	static int getCounterObject();
	~MyString();
};

