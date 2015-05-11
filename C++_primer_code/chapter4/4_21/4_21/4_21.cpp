// 4_21.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	vector <int> odd;
	cout << "输入一堆数字：" << endl;
	int x;
	while (cin >> x){
		if (x % 2 == 0){
			odd.push_back(x);
		}
		else
		{
			x = x * 2;
			odd.push_back(x);
		}
	}

	for (auto y : odd){
		cout << y << " ";
	}cout << endl;

	return 0;
}
