// 3_22.cpp : 定义控制台应用程序的入口点。
//
//修改那个输出text的语句，改为输入大写
#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
int main()
{
	vector<string> text;
	string s;

	while (getline(cin, s))
		text.push_back(s);

	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it){
		for (auto itx = it->begin(); itx != it->end(); ++itx){
			(*itx) = toupper(*itx);
		}
		cout << *it << endl;
	}
	return 0;
}
