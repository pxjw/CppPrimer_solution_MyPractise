// 3_5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using std::string; using std::cin; using std::cout; using std::endl;
/*
从标准输入中读入多个字符串、
并将他们链接在一起并输出、
然后修改程序，用空格分开字符串、
*/
int main(){
	string x,y;
	y = "";
	while (cin >> x){
		//y += x;
		//更改
		y = y + x + " ";
	}
	cout << y << endl;
}

