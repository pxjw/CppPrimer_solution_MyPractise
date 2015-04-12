// 1_20.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item item;
	while (std::cin>>item){
		std::cout << item << std::endl;
	}
	return 0;
}
