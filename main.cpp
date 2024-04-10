#include <iostream>
using namespace std;
#include "MyString.h"


int main()
{
	//char* test = new char[6] {'H', 'e', 'l', 'l','o', '\0'};
	//MyString str1;
	//cout << "str1: ";
	//str1.print();

	//MyString str2(test);
	//cout << "str2: ";
	//str2.print();
	//delete[]test;

	MyString str3;
	str3.input();
	cout << "str3: ";
	str3.print();



	MyString str4;
	str4.MyStrcpy(str3);	// копирование строк
	cout << "str4_copyOf_str3: ";
	str4.print();

	cout << "Result of searching substring in MyString: ";
	char* test2 = new char[4] { 'l', 'l', 'o', '\0'};
	cout << str3.MyStrStr(test2)<<endl;	// поиск подстроки в строке
	delete[]test2;

	cout << endl << "Searching char in str." << endl;
	MyString str5;
	str5.input();
	cout << "Enter char to search hes index in string: ";
	char c;
	cin >> c;
	cout<<"char index: " << str5.MyChr(c)<<endl; // поиск символа в строке(индекс найденного символа, либо -1)

	cout << "Strlen of last string: "<<	str5.MyStrLen()<<endl;	// возвращает длину строки

	cout << "Concatenation: " << endl;
	str4.MyStrCat(str5);		 // объединение строк
	str4.print();

	cout << "Enter char to del in last str: ";
	cin >> c;
	str4.MyDelChr(c);	// удаляет указанный символ 
	str4.print();

	cout << "Str cmp: "<<str4.MyStrCmp(str5)<<endl;	 // сравнение строк 
	
	//cout<<"Counter object: "<< str4.getCounterObject() << endl;

	return 0;
}