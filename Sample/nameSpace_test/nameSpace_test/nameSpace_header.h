//nameSpace_header.h
#include "stdafx.h"
#include<iostream>

namespace newNameSpace
{
	int upbown, downbown;
	class counter{
		int count;
	public:
		counter(int n)
		{
			if (n <= upbown)
			{
				count = n;
			}
			else
			{
				count = upbown;
			}
		}
		void reSet(int n)
		{
			if (n <= upbown)
			{
				count = n;
			}
		}
		int run()
		{
			if (count > downbown)
			{
				return count--;
			}
			else
				return downbown;
		}
	};
}