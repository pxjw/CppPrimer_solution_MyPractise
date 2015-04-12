// 1_23.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	int num;
	Sales_item item1,item2;
	if (cin >> item1){
		while (cin>>item2)
		{
			if (compareIsbn(item1, item2)){
				num++;
			}
			else
			{
				cout << "ISBN号为" << item1.isbn() << "的有：" << num << "本。" << endl;
				item1 = item2;
				num = 1;
			}
		}
		cout << "ISBN号为" << item1.isbn() << "的有：" << num << "本。" << endl;
	}
	else
	{
		cout << "无" << endl;
		return -1;
	}
	return 0;
}

