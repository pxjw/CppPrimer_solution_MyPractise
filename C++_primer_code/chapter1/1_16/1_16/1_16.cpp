// 1_16.cpp : 定义控制台应用程序的入口点。
//
//键盘读取一组数据，求和
#include "stdafx.h"
#include<iostream>
int main(){
	int val,sum=0;
	while (std::cin >> val){
		sum += val;
	}
	std::cout << sum << std:: endl;
	return 0;
}

