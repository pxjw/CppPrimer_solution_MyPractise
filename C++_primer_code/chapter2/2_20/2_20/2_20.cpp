// 2_20.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main(){
	int i = 42;
	int *pi = &i;
	*pi = *pi* *pi;
	cout << "value=:" << pi << endl;
	cout << "realValue=:" << *pi;
}
