#include <iostream>
#include <Windows.h>
#include <map>
#include "Group.h"
#include "Student.h"

Group::Group(string name)
{
	this->name = name;
}

Group::Group()
{
	name = "Не определена";
}

void Group::setName(string newName)
{
    name = newName;
}

std::string Group::getName()
{
    return name;
}

int Group::getSize()
{
	return this->masStud.size();
}
void Group::addStudent(Student *newStudent)
{
	this->masStud.insert(newStudent);
}

void Group::delStudent(Student *oldStudent)
{
	this->masStud.erase(oldStudent);
}

//void Group::GroupSort()
//{
//	this->masStud.sort();
//}

void Group::GroupOut() {
	this->iter = masStud.begin();
	while (iter != masStud.end()) {
		(*iter)->display();
		iter++;
	}
}

Student* Group::findStud(std::string searchName, std::string searchLastName)
{
	Student *temp = new Student(searchName, searchLastName);
	iter = masStud.lower_bound(temp);
	delete temp;

	return *iter;
}





