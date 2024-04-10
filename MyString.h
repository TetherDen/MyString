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
	void MyStrcpy(MyString& obj); // ����������� �����
	bool MyStrStr(const char* str);// ����� ��������� � ������
	int  MyChr(char c); // ����� ������� � ������(������ ���������� �������, ���� -1)
	int MyStrLen();	// ���������� ����� ������
	void MyStrCat(MyString& b); // ����������� �����
	void MyDelChr(char c); // ������� ��������� ������ 
	int MyStrCmp(MyString& b); // ��������� ����� 


	static int getCounterObject();
	~MyString();
};

