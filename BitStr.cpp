#include "BitStr.h"
#include <iostream>
using namespace std;


BitStr::BitStr(): MyString ()
{
}

BitStr::BitStr(const char* str) : MyString(str)
{
	isBit();
}

BitStr::BitStr(const BitStr& obj)
{
	size = obj.size;
	str = new char[size + 1];
	strcpy_s(str, size + 1, obj.str);

}

BitStr& BitStr::operator=(const BitStr& obj)
{
	if (this != &obj)
	{
		delete[]str;
		str = new char[obj.size + 1];
		size = obj.size;
		strcpy_s(str, size + 1, obj.str);
	}
	return *this;
}

bool BitStr::operator==(const BitStr& obj)
{
	return (strcmp(str, obj.str) == 0);
}

bool BitStr::operator!=(const BitStr& obj)
{
	return (strcmp(str, obj.str) != 0);
}

void BitStr::operator+(const BitStr& obj)
{
	size += obj.size;
	char* newStr = new char[size + 1];
	strcpy_s(newStr, strlen(str) + 1, str);
	strcat_s(newStr, size + 1, obj.str);
	delete[]str;
	str = newStr;
}

BitStr& BitStr::operator+=(const BitStr& obj)
{
	size += obj.size;
	char* newStr = new char[size + 1];
	strcpy_s(newStr, strlen(str) + 1, str);
	strcat_s(newStr, size + 1, obj.str);
	delete[]str;
	str = newStr;
	return *this;
}

BitStr::~BitStr()
{
	if (str != nullptr)
	{
		delete[]str;
		str = nullptr;
		counterObject--;   // 
	}

}

void BitStr::isBit()
{
	for (int i = 0; this->str[i] != '\0'; i++)
	{
		if (this->str[i] != '0' && this->str[i] != '1')
		{
			delete[] this->str;
			this->str = new char[1];
			this->size = 0;
			this->str[size] = '\0';
			break;
		}
	}
}