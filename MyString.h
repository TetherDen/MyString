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
	void MyStrcpy(MyString& obj); // копирование строк
	bool MyStrStr(const char* str);// поиск подстроки в строке
	int  MyChr(char c); // поиск символа в строке(индекс найденного символа, либо -1)
	int MyStrLen();	// возвращает длину строки
	void MyStrCat(MyString& b); // объединение строк
	void MyDelChr(char c); // удаляет указанный символ 
	int MyStrCmp(MyString& b); // сравнение строк 

	operator int(); // Перетворення до int повертає довжину рядка
	char operator[](int ind);  // [] — повертає елемент за вказаним індексом;
	int operator()(char ch);
	//()
	static int getCounterObject();
	~MyString();
};

