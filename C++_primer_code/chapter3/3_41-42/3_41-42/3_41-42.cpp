// 3_41-42.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int main()
{
	//3.41 整型数组初始化一个vector对象
	//int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//for (auto x : arr){
	//	cout << x << endl;
	//}
	//vector<int> vec (begin(arr), end(arr));
	//for (auto y : vec){
	//	cout << y << endl;
	//}
	//return 0;

	//3.42 将含有整数元素的vector拷贝给一个数组
	vector <int> vect = { 2, 4, 2, 3, 4, 54, 4, 23, 3, 2, 32, 3 };
	int arrx[12];
	auto it = vect.cbegin();
	for (auto &x : arrx){
		x = *it;
		it++;
		cout << x << " ";
	}cout << endl;

	for (auto y : arrx){
		cout << y << " ";
	}cout << endl;

	return 0;

}