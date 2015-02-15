// nameSpace_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "nameSpace_header.h"
#include <iostream>
using namespace newNameSpace;
int _tmain(int argc, _TCHAR* argv[])
{	
	upbown = 100;
	downbown = 0;
	counter co(10);
	int i;
	do
	{
		i = co.run();
		std::cout << i << " ";

	} while (i >downbown);
	std::cout << std::endl;

	return 0;
}

