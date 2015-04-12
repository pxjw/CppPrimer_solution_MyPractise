// 1_11.cpp : 定义控制台应用程序的入口点。
//

//用户输入2整数，打印其间所有数
#include "stdafx.h"
#include<iostream>
int main()
{
	int i, j;
	std::cout << "输入2个整数：" << std::endl;
	std::cin >> i >> j;
	if (i > j){
		j++;
		while (i != j){
			std::cout << j++<<std::endl;
		}
	}
	else{
		i++;
		while (i != j){
			std::cout << i++ << std::endl;
		}
	}
	return 0;
}

