// 3_36.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int arr1[5], arr2[5];
	srand((unsigned)time(NULL));
	for (int i = 0; i < 5;i++){
		arr1[i] = rand() % 100;
	}
	for (int j = 0; j < 5; j++){
		arr2[j] = rand() % 100;
	}
	int *p = begin(arr1);
	int *q = begin(arr2);
	while (p != end(arr1) && q != end(arr2)){
		if (*p != *q){
			cout << "不等" << endl;
			return -1;
		}
		p++; q++;
	}
	cout << "全对" << endl;
	return 0;
}
