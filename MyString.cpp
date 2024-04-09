#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString()
{
	size = 80;
	str = new char[size + 1];
	str[size] = '\0';
	counterObject++;
}

MyString::MyString(int size)
{
	if (size > 0)
	{
		str = new char[size + 1];
		str[size] = '\0';
		counterObject++;
	}

}

MyString::MyString(const char* str1)
{
	if (str1 != nullptr)
	{
		int size = strlen(str1);
		str = new char[size + 1];
		strcpy_s(str, size + 1, str1);
		str[size] = '\0';   //  strcpy копирует с \0?
		counterObject++;
	}
}

void MyString::input()
{
	const int N = 255;
	char inpStr[N];
	cout << "Enter ur string (>255): " << endl;

	cin.getline(inpStr, N);
	int newSize = strlen(inpStr) ;
	delete[]str;
	str = new char[newSize+1];
	strcpy_s(str, newSize+1 , inpStr);
	str[newSize] = '\0';
}

void MyString::print()
{
	if (str != nullptr)
	{
		cout << str << endl;
	}
	else
	{
		cout << "Empty string."<<endl;  // Test, del
	}

}



int MyString::getCounterObject()
{
	return counterObject;
}

MyString::~MyString()
{
	if (str != nullptr)
	{
		delete[]str;
		counterObject--;
	}

}

int MyString::counterObject = 0;