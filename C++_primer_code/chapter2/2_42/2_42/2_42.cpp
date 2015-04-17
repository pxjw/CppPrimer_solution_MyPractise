// 2_42.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"Sales_data.h"
#include<iostream>
#include<string>
int main(){

	//练习1.5.1
	Sales_data book;
	double price;
	std::cin >> book.bookNo >> book.units_sold >> price;
	book.Calculate_revenue(price);
	book.Print();

	//联系1.5.2
	Sales_data book1, book2;
	double price1, price2;
	std::cin >> book1.bookNo >> book1.units_sold >> price1;
	std::cin >> book2.bookNo >> book2.units_sold >> price2;
	book1.Calculate_revenue(price1);
	book2.Calculate_revenue(price2);

	if (book1.bookNo == book2.bookNo)
	{
		book1.Add_data(book2);
		book1.Print();

		return 0;
	}
	else
	{
		std::cerr << "Data must refer to same ISBN" << std::endl;
		return -1;  // indicate failure
	}

	//练习1.5.3
	Sales_data total;
	double totalPrice;
	if (std::cin >> total.bookNo >> total.units_sold >> totalPrice)
	{
		total.Calculate_revenue(totalPrice);

		Sales_data trans;
		double transPrice;
		while (std::cin >> trans.bookNo >> trans.units_sold >> transPrice)
		{
			trans.Calculate_revenue(transPrice);

			if (total.bookNo == trans.bookNo)
			{
				total.Add_data(trans);
			}
			else
			{
				total.Print();
				total.Set_data(trans);
			}
		}

		total.Print();

		return 0;
	}
	else
	{
		std::cerr << "No data?!" << std::endl;
		return -1;  // indicate failure
	}
	return 0;
}

