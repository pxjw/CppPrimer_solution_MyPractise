// 1_13.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
//仅重写1.11
int main()
{
	int val1, val2;
	std::cin >> val1 >> val2;
	if (val1 > val2){
		for (val2++; val1 > val2; val2++){
			std::cout << val2 << std::endl;
		}
	}
	else{
		for (val1++; val1 < val2; val1++){
			std::cout << val1 << std::endl;
		}
	}
	return 0;
}


