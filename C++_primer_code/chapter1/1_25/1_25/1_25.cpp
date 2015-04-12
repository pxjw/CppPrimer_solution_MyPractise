// 1_25.cpp : 定义控制台应用程序的入口点。
//
//通过将所有ISBN合并，存入total的变量中。使用tran变量保存读取的每条销售记录。
#include "stdafx.h"
#include"Sales_item.h"
#include<iostream>
int main(){
	Sales_item total;
	if (std::cin >> total){
		Sales_item tran;
		while (std::cin >> tran){
			if (total.isbn() == tran.isbn()){
				total += tran;
			}
			else{
				std::cout << total << std::endl;
				total = tran;
			}
		}
		std::cout << total << std::endl;
	}
	else{
		std::cerr << "没有数据！" << std::endl;
		return -1;
	}
	return 0;
}
