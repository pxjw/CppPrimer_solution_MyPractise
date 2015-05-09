// 3_39-40.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
//3.39
//int main()
//{
//	
//	//C++风格
//	//string str1, str2;
//	//cout << "请输入:" << endl;
//	//cin >> str1 >> str2;
//	//if (str1 > str2){
//	//	cout << "第一个大于第二个！" << endl;
//	//}
//	//else if (str1 < str2)
//	//{
//	//	cout << "第一个小于第二个！" << endl;
//	//}
//	//else
//	//	cout << "相等" << endl;
//
//	//return 0;
//
//	//C风格字符串
//	char str1[50], str2[50];
//	cin >> str1 >> str2;
//	auto result = strcmp(str1, str2);
//	switch (result)
//	{
//	case 1:cout << "第一个大于第二个！" << endl; break;
//	case -1:cout << "第一个小于第二个！" << endl; break;
//	case 0:cout << "相等" << endl; break;
//	default:cout << "你的输入跑到外星球去了！！= =。" << endl;
//		break;
//	}
//
//	return 0;
//}

//3.40
int main(){
	char str1[40];
	char str2[40];
	char str3[80] = {" "};
	cout << "输入两个字符串，长度不超过40" << endl;
	cin >> str1 >> str2;
	strcpy(str3, str1); 
	strcat(str3, str2);
	cout << "连接后的字符串：" << str3 << endl;
	return 0;
}