// 1_22.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include"Sales_item.h"
using namespace std;
int main()
{
	Sales_item sum, tran;
	cout << "输入连续机组ISBN记录" << endl;
	if (cin >> sum){
		while (cin >> tran){
			if (compareIsbn(tran, sum)){
				sum += tran;
			}
			else
				return -1;
		}
		cout << sum << endl;
	}
	else
		cout << "不等" << endl;
		return -1;
	return 0;
}
