// 3_35.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int arrayx[10] = {1,2};
	for (auto val : arrayx){
		cout << val << " ";
	}
	cout << endl;
	int *p = begin(arrayx);
	while (p != end(arrayx)){
		*p = 0;
		++p;
	}
	for (auto val : arrayx){
		cout << val << " ";
	}
	cout << endl;

	return 0;

}

