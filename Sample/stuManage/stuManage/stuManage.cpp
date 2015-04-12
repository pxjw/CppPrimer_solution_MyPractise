// stuManage.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
class Student
{
private :
	std::string stuName;
	unsigned long stuNum;
	int stuScore;

public:
	//构造函数参数与花括号中间冒号部分为初始化
	//给构造函数设置默认参数
	Student(std::string s_name="null", unsigned long s_num=0000, 
		int s_score=00) :stuName(s_name), stuNum(s_num), stuScore(s_score){}
	//通过this指针定义构造函数
	//Student(std::string stuName,
	//	unsigned long stuNum,
	//	int stuScore){
	//	this->stuName = stuName;
	//	this->stuNum = stuNum;
	//	this->stuScore = stuScore;
	//}
	
	~Student(){};
	//设置get和set函数
	std::string GetName(){
		return stuName;
	}
	unsigned long GetNum(){
		return stuNum;
	}
	int GetScore(){
		return stuScore;
	}
	void setName(std::string newName){
		stuName = newName;
	}
	void setNum(unsigned long newNum){
		stuNum = newNum;
	}
	void setScore(int newSocre){
		stuScore = newSocre;
	}
};

void Query(bool &flag, Student *s_List){
	int Num;
	int stu_Num;
	char YorN;
	bool isFound = false;
	std::cout << "Please put the student number！"<<std::endl;
	std::cin >> Num;

	for (int i = 0; i < 10; i++)
	{
		
		stu_Num = s_List[i].GetNum();
		if (Num = stu_Num)
		{
			std::cout << "姓名" << s_List[i].GetName();
			std::cout << "学号" << s_List[i].GetNum();
			std::cout << "成绩" << s_List[i].GetScore();
			isFound = true;
			break;
		}	
	}
	if (!isFound)
	{
		std::cout << "Nothing"<<std::endl;
	}
	std::cout << "是否继续？Y OR N？" << std::endl;
	std::cin >> YorN;
	if (YorN == 'y' || YorN == 'Y')
	{
		flag = true;
	}
	else if (YorN =='n'||YorN=='N')
	{
		flag = false;
	}
	else
	{
		std::cout << "sys error" << std::endl;
	}
}

void PrintAll(Student *s_List,int n){
	for (int i = 0; i < n; i++)
	{
		std::cout << "姓名：" << s_List[i].GetName()
			<< "\t" << "学号：" << s_List[i].GetNum() << "\t"
			<< "成绩：" << s_List[i].GetScore()<<std::endl;
	}
}
//int _tmain(int argc, _TCHAR* argv[])
//{
//	Student s_List[10] = { 
//		Student("渣渣", 12154522, 99), Student("大大", 48545615, 88), 
//		Student("咳咳", 45155355, 35), Student("婊砸", 12144865, 45), 
//		Student("啦啦", 12154522, 99), Student("低头", 12154522, 82), 
//		Student("渣没", 15488444, 86), Student("默默", 12154522, 99), 
//		Student("小渣", 89551223, 96), Student("大渣", 11544444, 28), };
//
//	bool flag = true;
//	while (flag){
//		Query(flag, s_List);
//	}
//	std::cout << "---------------" << std::endl;
//	std::cout << "遍历" << std::endl;
//	PrintAll(s_List);
//	return 0;
//}
int _tmain(int argc, _TCHAR* argv[])
{
	std::string _stuName;
	unsigned long _stuNum;
	int _stuScore;
	Student *s_List;
	int size;
	std::cout << "Please enter the student amout:";
	std::cin >> size;
	s_List= new Student[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please enter the student's name:" ;
		std::cin >> _stuName;
		std::cout << "Please enter the students num:" ;
		std::cin >> _stuNum;
		std::cout << "Please enter the students score:";
		std::cin >> _stuScore;
		s_List[i] = Student{ _stuName, _stuNum, _stuScore };
	}	
		std::cout << "遍历：\d" << "----------" << std::endl;
		PrintAll(s_List,size);
	return 0;
}
