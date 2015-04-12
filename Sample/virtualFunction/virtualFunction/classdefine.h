#include<iostream>
//定义集合类
//三个受保护成员：实体指针，数量，能力
//构造析构
//get函数，检验是否为空函数,全部定义为常函数
//定义三个虚函数：判断，加，减
class IntSet{
protected:
	int *elem;
	int count;
	int capacity;
public:
	IntSet(int capacity = 100, int array[] = NULL, int count = 0);
	~IntSet(){ delete[]elem; }
	int getCount()const{ return count; }
	int getCapacity()const{ return capacity; }
	bool isEmpty()const{ return count == 0; }

	virtual bool isIntSet(int ele);
	virtual void add(int ele);
	virtual void remote(int ele);
	int get(int index);
};

//定义派生类：有序集合类
class OrderIntSet :public IntSet
{
public:
	OrderIntSet(int capacity = 100, int array = NULL, int count = 0);
	virtual bool isIntSet(int ele);
	virtual void add(int ele);
	virtual void remote(int ele);
};