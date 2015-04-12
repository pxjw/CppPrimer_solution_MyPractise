// 1_9.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
//while,50+~100

int main()
{
	int x = 50;
	int sum = 0;
	while (x <= 100){
		sum += x;
		x++;
	}
	std::cout << sum << std::endl;
}
