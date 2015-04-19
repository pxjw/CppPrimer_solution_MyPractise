// 3_6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using std::string; using std::cin; using std::cout; using std::endl; using std::getline;
/*
3.6
使用范围for语句将字符串内所有字符用X代替
*/
//int main(){
//	string x;
//	getline(cin, x);
//	//cin >> x;
//	for (auto &c : x){
//		c = 'X';
//	}
//	cout << x<<endl;
//}

/*
3.8
分别使用while和for重写3.6
1.while
2.for
*/
//int main(){
//	string x;
//	int i = 0;
//	getline(cin, x);
//	while (i < x.size()){
//		x[i] = 'X';
//		i++;
//	}
//	cout << x << endl;
//	return 0;
//}

int main(){
	string x;
	getline(cin, x);
	for (int u = 0; u < x.size(); u++){
		x[u] = 'X';
	}
	cout << x << endl;
	//3.9
	//cout << x[0] << endl;
	return 0;
}