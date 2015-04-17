/*
定义一个Sale_data头文件。
有三个变量：bookNo，units_sold,revenue
设置有四个方法（函数）：
void Calculate_revenue(double price);
void Set_data(Sales_data data);
void Add_data(Sales_data data);
void Print();
*/

#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<iostream>
#include<string>
struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	void Calculate_revenue(double price);
	void Set_data(Sales_data data);
	void Add_data(Sales_data data);
	void Print();

	double Calulate_average();
};
void Sales_data::Calculate_revenue(double price){
	revenue = units_sold*price;
}
void Sales_data::Set_data(Sales_data data){
	bookNo = data.bookNo;
	units_sold = data.units_sold;
	revenue = data.revenue;
}
void Sales_data::Add_data(Sales_data data){
	if (bookNo != data.bookNo){
		return;
	}
	else{
		units_sold += data.units_sold;
		revenue = data.revenue;
	}
}

double Sales_data::Calulate_average(){
	if (revenue != 0){
		return revenue / units_sold;
	}
	else
	{
		return 0.0;
	}
}
void Sales_data::Print(){
	std::cout << bookNo << " " << units_sold << " " << revenue << std::endl;
	double average_price = Calulate_average();
	if (average_price != 0){
		std::cout << "平均销量" << average_price << std::endl;
	}
	else
	{
		std::cout << "无销量" << std::endl;
	}
}

#endif