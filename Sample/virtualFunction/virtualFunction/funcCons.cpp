#include<iostream>
#include"classdefine.h"
IntSet::IntSet(int capacity, int array[], int count) :
	count(0), capacity(capacity), elem(new int[capacity])
{
	if (array ==NULL)
	{
		return;
	}
	for (int  i = 0; i < count; i++)
	{
		add(array[i]);
	}
}

bool IntSet::isIntSet(int ele)
{
	for (int i = 0; i < count; i++)
	{
		if (elem[i] ==ele)
		{
			return true;
		}
	}
}

void IntSet::add(int ele)
{
	if (count>=capacity)
	{
		std::cerr << "Ô½½ç" << std::endl;
		exit(1);
	}
	if (!isIntSet(ele))
	{
		elem[count++] = ele;
	}
}

void IntSet::remote(int ele)
{
	if (count ==0)
	{
		return;
	}
	for (int i = 0; i < count; i++)
	{
		if (elem[i] ==ele)
		{
			break;
		}
		while (i<count)
		{
			elem[i] = elem[i + 1];
			i++;
		}
	}
}

int IntSet::get(int index)
{
	if (index<0||index>=count)
	{
		std::cerr << "dasdsdsd";
		exit(2);
	}
	return elem[index];
}