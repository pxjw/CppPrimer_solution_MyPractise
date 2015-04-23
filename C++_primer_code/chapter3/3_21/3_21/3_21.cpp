// 3_21.cpp : 定义控制台应用程序的入口点。
//

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
	vector<int> v1, v2(10), v3(10, 42), v4{ 10 }, v5{ 10, 42 }, v6{ 10 };
	vector<string>v7{ 10, "hi" };
	cout << v1.size() << v2.size() << v7.size() << endl;
	if (v1.cbegin() != v1.cend()){
		cout << "v1的元素分别是：" << endl;
		for (auto it = v1.cbegin(); it != v1.cend();it++){
			cout << *it << " ";
		}
		cout << endl;
	}
}

/*
3.16
输出3。13中的vector
*/
//int main(){
//	vector<int> v1, v2(10), v3(10, 42), v4{ 10 }, v5{ 10, 42 }, v6{ 10 };
//	vector<string>v7{ 10, "hi" };
//	cout << v1.size() << v2.size() << v7.size() << endl;
//
//	for (auto i : v3){
//		cout << i;
//	}
//	cout << endl;
//	for (auto j : v5){
//		cout << j;
//	}
//	cout << endl;
//	for (auto k : v7){
//		cout << k;
//	}
//	cout << endl;
//	return 0;
//}
