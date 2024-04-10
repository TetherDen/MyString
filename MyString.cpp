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

void MyString::input() // запрос строки для обьекта
{
	const int N = 255;
	char inpStr[N];
	cout << "Enter ur string (>255): " << endl;

	cin.getline(inpStr, N);
	int newSize = strlen(inpStr);
	delete[]str;
	str = new char[newSize + 1];
	strcpy_s(str, newSize + 1, inpStr);
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
		cout << "Empty string." << endl;  // Test, del
	}

}

void MyString::MyStrcpy(MyString& obj)  // копирование строк
{
	int size = strlen(obj.str);
	if (str != nullptr)
	{
		delete[]str;
	}
	this->str = new char[size + 1];
	strcpy_s(this->str, size + 1, obj.str);
}

bool MyString::MyStrStr(const char* str)	// поиск подстроки в строке
{
	for (int i = 0; i < strlen(this->str); i++)
	{
		if (this->str[i] == str[0])
		{
			int k = 0;
			for (int j = i; j < strlen(str); j++)
			{
				if (this->str[j] == str[k])
				{
					k++;
				}
				else
				{
					break;
				}
			}
			return true;
		}
	}
	return false;
}

int MyString::MyChr(char c)	// поиск символа в строке(индекс найденного символа, либо -1)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == c)
		{
			return i;
		}

	}
	return -1;
}

int MyString::MyStrLen()	// возвращает длину строки
{
	return strlen(str);
}

void MyString::MyStrCat(MyString& b)	 // объединение строк
{
	int size = strlen(str) + strlen(b.str);
	MyString NewStr(size + 1);
	strcpy_s(NewStr.str, strlen(str) + 1, str);
	strcat_s(NewStr.str, size + 1, b.str);
	//NewStr.str[size] = '\0';
	this->MyStrcpy(NewStr);
}

void MyString::MyDelChr(char c)		// удаляет указанный символ
{
	int j = 0;
	for (int i = 0; str[i]!='\0'; i++)
	{
		if (str[i] != c)
		{
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0';
	size = strlen(str);
}

int MyString::MyStrCmp(MyString& b)	 // сравнение строк 
{
	if (strcmp(str, b.str) == 1)
	{
		return 1;
	}
	else if (strcmp(str, b.str) == -1)
	{
		return -1;
	}
	else
		return 0;
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