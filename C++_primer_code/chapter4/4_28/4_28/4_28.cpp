// 4_28.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	cout << "bool\t" << sizeof(bool) << endl;
	cout << "char\t" << sizeof(char) << endl;
	cout << "wchar_t\t" << sizeof(wchar_t) << endl;
	cout << "char16_t\t" << sizeof(char16_t) << endl;
	cout << "char32_t\t" << sizeof(char32_t) << endl;
	cout << "short\t" << sizeof(short) << endl;
	cout << "int\t" << sizeof(int) << endl;
	cout << "float\t" << sizeof(float) << endl;
	cout << "double\t" << sizeof(double) << endl;
	cout << "long double\t" << sizeof(long double) << endl;

	cout << endl;

	int x[10]; int *p = x;
	cout << sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(p) / sizeof(*p) << endl;
	return 0;
}