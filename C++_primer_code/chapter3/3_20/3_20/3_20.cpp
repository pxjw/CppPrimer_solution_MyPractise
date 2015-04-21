// 3_20.cpp : 定义控制台应用程序的入口点。
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
//第一问
//int main()
//{
//	vector<int> val;
//	int x;
//	while (cin >>x){
//		val.push_back(x);
//	}
//	if (val.size() == 0){
//		cout << "无元素" << endl;
//		return -1;
//	}
//	for (decltype(val.size()) i = 0; i < val.size() - 1; i += 2){
//		cout << val[i] + val[i + 1] << endl;
//	}
//	if (val.size() % 2 != 0){
//		cout << val[val.size()-1] << endl;
//	}
//	return 0;
//}
//第二问
int main()
{
	vector<int> val;
	int x;
	while (cin >> x){
		val.push_back(x);
	}
	if (val.size() == 0){
		cout << "无元素" << endl;
		return -1;
	}
	cout << val[0] << endl;
	cout << val[val.size()-1] << endl;
	for (decltype(val.size()) i = 1; i < val.size() - 2; i += 2){
		cout << val[i] + val[i + 1] << endl;
	}
	if (val.size() % 2 != 0){
		cout << val[val.size() - 2] << endl;
	}
	return 0;
}
