// deriveConReCon.cpp : 定义控制台应用程序的入口点。
//
//派生类的构造函数和析构函数
#include "stdafx.h"
#include<iostream>
#include<string>
#include"classdefine.h"
using std::string;
using std::cout;
using std::endl; 
void show(Furniture *f)
{
	cout << "家具类型：" << f->getType() << " 主材料：" 
		<< f->getMaterial() << " 价格：" << f->getPrice() << endl;
}
int _tmain(int argc, _TCHAR* argv[])
{
	Sofa sofa("布制",50000,10);
	skinSofa skinsofa(20000, 5, "牛皮");

	cout << "家具类型：" << skinsofa.getType() << "\t"
		<< "材料：" << skinsofa.getMaterial() << "\t"
		<< "价格：" << skinsofa.getPrice() << "\t"
		<< "皮制：" << skinsofa.getSkinType() << "\t"
		<< "数量：" << skinsofa.getSeats() << "\t"<<endl;
	
	//用派生类的指针初始化基类的指针
	Furniture *sofa2 = new Sofa("钢筋",20000.0,2);
	show(&sofa);
	show(sofa2);
	return 0;
}

