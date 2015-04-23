// 3_24.cpp : 定义控制台应用程序的入口点。
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
//2.24

int main()
{
	vector<int> val;
	int x;
	while (cin >> x){
		val.push_back(x);
	}
	if (val.cbegin() == val.cend()){
		cout << "无元素、" << endl;
		return -1;
	}
	cout << "首尾的元素为：" << endl;
	auto beg = val.begin();
	auto end = val.end();
	//这里的it计算到这个迭代器的中点
	//it != beg + (end - beg) / 2

	for (auto it = beg; it != beg + (end - beg) / 2; it++){
		cout << (*it + *(beg + (end - it) - 1))<<" ";//此处考虑beg的内存位置，不一定从0开始

		if ((it - beg + 1) % 5 == 0){
			cout << endl;
		}
	}
	if (val.size() % 2 == 0){
		cout << *(beg + (end - beg)/2) ;
	}
	return 0;
}

//int main()
//{
//	vector<int> val;
//	int x;
//	while (cin >>x){
//		val.push_back(x);
//	}
//	if (val.cbegin() == val.cend()){
//		cout << "无元素、" << endl;
//		return -1;
//	}
//	//通过auto进行推断
//	for (auto it = val.cbegin(); it != val.cend()-1; it++){
//		cout << (*it + *(++it))<<" ";
//
//		if ((it - val.cbegin() + 1) % 10 == 0){
//			cout << endl;
//		}
//	}
//	//int text;
//	//cin >> text;
//	if (val.size() % 2 != 0){
//		cout << *(val.cend() - 1);
//	}
//	return 0;
//}

//3.20

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
//int main()
//{
//	vector<int> val;
//	int x;
//	while (cin >> x){
//		val.push_back(x);
//	}
//	if (val.size() == 0){
//		cout << "无元素" << endl;
//		return -1;
//	}
//	cout << val[0] << endl;
//	cout << val[val.size() - 1] << endl;
//	for (decltype(val.size()) i = 1; i < val.size() - 2; i += 2){
//		cout << val[i] + val[i + 1] << endl;
//	}
//	if (val.size() % 2 != 0){
//		cout << val[val.size() - 2] << endl;
//	}
//	return 0;
//}

