#pragma once
#include "MyString.h"

class BitStr : public MyString
{
	void isBit();
public:
	BitStr();
	BitStr(const char* str);
	BitStr(const BitStr& obj);  

	BitStr& operator=(const BitStr& obj);
	bool operator==(const BitStr& obj);
	bool operator !=(const BitStr& obj);
	void operator +(const BitStr& obj);
	BitStr& operator+= (const BitStr& obj);

	~BitStr();

};

