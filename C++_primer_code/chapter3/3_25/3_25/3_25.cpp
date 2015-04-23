// 3_25.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main()
{
	vector<unsigned> scores(11);
	unsigned grade;
	auto it = scores.begin();
	cout << "输入一组成绩" << endl;
	while (cin >> grade){
		if (grade <= 100){
			++*(it + grade / 10);
		}
	}
	cout << "成绩从高到低排序为：" << endl;
	for (auto vt = scores.begin(); vt != scores.end(); vt++){
		cout << *(vt) << " ";
	}
	cout << endl;
	return 0;
}