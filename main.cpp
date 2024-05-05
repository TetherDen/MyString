#include <iostream>
using namespace std;
#include "MyString.h"
#include "BitStr.h"


int main()
{
	//MyString str1;
	//cout << "str1: ";
	//str1.print();

	//char* test = new char[6] {'H', 'e', 'l', 'l','o', '\0'};
	//MyString str2(test);
	//delete[]test;
	//cout << "str2: ";
	//str2.print();

	//MyString str3;
	//str3.input();
	//cout << "str3: ";
	//str3.print();

	//MyString str4;
	//str4.MyStrcpy(str3);	// копирование строк
	//cout << "str4_copyOf_str3: ";
	//str4.print();

	//cout << "Result of searching substring in MyString: ";
	//char* test2 = new char[4] { 'l', 'l', 'o', '\0'};
	//cout << str3.MyStrStr(test2)<<endl;	// поиск подстроки в строке
	//delete[]test2;

	//cout << endl << "Searching char in str." << endl;
	//MyString str5;
	//str5.input();
	//cout << "Enter char to search hes index in string: ";
	//char c;
	//cin >> c;
	//cout<<"char index: " << str5.MyChr(c)<<endl; // поиск символа в строке(индекс найденного символа, либо -1)

	//cout << "Strlen of last string: "<<	str5.MyStrLen()<<endl;	// возвращает длину строки

	//cout << "Concatenation: " << endl;
	//str4.MyStrCat(str5);		 // объединение строк
	//str4.print();

	//cout << "Enter char to del in last str: ";
	//cin >> c;
	//str4.MyDelChr(c);	// удаляет указанный символ 
	//str4.print();

	//cout << "Str cmp: "<<str4.MyStrCmp(str5)<<endl;	 // сравнение строк 
	//
	////cout<<"Counter object: "<< str4.getCounterObject() << endl;

	cout << " Bit string " << endl;

	BitStr str;
	str.print();
	cout<<" str len: " << str.MyStrLen()<<endl;

	BitStr str2("1201010");
	str2.print();

	BitStr str3("00000111");
	str3.print();

	BitStr str4(str3);
	str4.print();

	str2 = str4;
	str2.print();
	cout << "str2 == str4: ";
	cout << (str2 == str4)<<endl;

	cout << "str2 + str4: ";
	str2 + str4;
	str2.print();



	return 0;
}