// 3_2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using std::string; using std::cin; using std::cout;
//从标准输入中一次读入一整行，然后修改该程序使其一次读入一个词
int main(){
	string res;
	char x;
	while (cin>>x){
		res += x;
	}
	cout << res;
}