#include "stdafx.h"
#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item ite1, ite2;
	std::cout << "输入两个对象：";
	std::cin >> ite1 >> ite2;
	if (compareIsbn(ite1, ite2)){
		std::cout << ite1 << ite2 << std::endl;
	}
	else{
		std::cout << "两个对象不等。" << std::endl;
	}
	return 0;
}
