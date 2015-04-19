// 3_14.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<int> s;
	vector<string> m;
	int x,taps=0;
	string u;
	//while (cin >> x){
	//	s.push_back(x);
	//	taps++;
	//}
	while (getline(cin, u)){
			m.push_back(u);
			taps++;
	}
	//for (int i = 0; i < taps; i++){
	//	cout << s[i] << endl;
	//}
	for (int i = 0; i < taps; i++){
		cout << m[i] << endl;
	}
	return 0;
}

