// 3_39-40.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	//C++风格
	//string str1, str2;
	//cout << "请输入:" << endl;
	//cin >> str1 >> str2;
	//if (str1 > str2){
	//	cout << "第一个大于第二个！" << endl;
	//}
	//else if (str1 < str2)
	//{
	//	cout << "第一个小于第二个！" << endl;
	//}
	//else
	//	cout << "相等" << endl;

	//return 0;

	//C风格字符串
	char str1[50], str2[50];
	cin >> str1 >> str2;
	auto result = strcmp(str1, str2);
	switch (result)
	{
	case 1:cout << "第一个大于第二个！" << endl; break;
	case -1:cout << "第一个小于第二个！" << endl; break;
	case 0:cout << "相等" << endl; break;
	default:cout << "你的输入跑到外星球去了！！= =。" << endl;
		break;
	}

	return 0;
}

