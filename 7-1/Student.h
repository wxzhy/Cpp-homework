#pragma once
#include"Person.h"
class Student:public Person
{
	int stuId, stuDuration;
	static int tuition;
public:

	Student();
	Student(const char* name, char gender, Date birthday, int id);
	void Print();
	void SetDuration(int d) { stuDuration = d; }
	int GetCashFlow() { return stuDuration * tuition; }
};

