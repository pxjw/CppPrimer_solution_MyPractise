// 1_10.cpp : 定义控制台应用程序的入口点。
//

//使用--，打印10~0
#include "stdafx.h"
#include<iostream>

int main(){
	int x = 10;
	while (x >= 0){
		std::cout << x << std::endl;
		x--;
	}
	return 0;
}