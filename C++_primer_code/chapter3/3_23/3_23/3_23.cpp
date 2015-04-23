// 3_23.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<ctime>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
//编写一段程序，创建一个含有10个整数的vector对象，然后使用迭代器将所有元素变成原来的2倍。输入vector内容。
int main()
{
	vector<int > n;
	//使用随机数种子
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++){
		n.push_back(rand() % 1000);
	}
	cout << "输出数字:" << endl;
	for (auto x : n){
		cout << x << endl;
	}
	cout << "输入翻倍后的数字：" << endl;
	for (auto it = n.begin(); it != n.end(); it++){
		*it *= 2;
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}
