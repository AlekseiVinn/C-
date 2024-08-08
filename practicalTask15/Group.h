#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
#include <list>
#include <set>
#include <algorithm>
#include <map>
#include "Student.h"

using namespace std;

class Group
{
private:
	std::string name;
	multiset<Student*, compareStudent> masStud;
	multiset<Student*, compareStudent>::iterator iter;

public:
	Group(string name);
	Group();

	void setName(string newName);
	string getName();

	int getSize();
	
	void addStudent(Student *newStud);
	void delStudent(Student *Stud);
	Student* findStud(std::string, std::string);
	
	//void GroupSort();
	void GroupOut();
};