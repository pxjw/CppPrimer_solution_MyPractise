// 3_4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using std::string; using std::cin; using std::cout; using std::endl;
//读入两个字符串，比较其是否想等并输出结果。如果不等，输出大的。
int main(){
	string x, y;
	cin >> x;
	cin >> y;
	cout << x.size() << "  " << y.size()<<endl;
	//改成比较等长就是：
	//if(x.size()==y.size())
	if (x == y)
		return -1;
	else
	{
		if (x.size()>y.size())
		{
			cout << x << endl;
		}
		else if (x.size() < y.size()){
			cout << y << endl;
		}
		else
		{
			cout << x << "++++++++++" << y<<endl;
		}
	}
		
	return 0;
}