#include <iostream>
#include <string>
#include <fstream>
#include "Student.h"
#include "IdCard.h"


Student::Student(std::string name, std::string last_name, IdCard *id) {
	Student::name = name;
	Student::last_name = last_name;
	Student::setIdCard(id);
}

void Student::setIdCard(IdCard* c)
{
	iCard = c;
}

IdCard Student::getIdCard()
{
	return *iCard;
}

void Student::set_name(std::string student_name)
{
	Student::name = student_name;
}

// Получение имени студента
std::string Student::get_name()
{
	return Student::name;
}
// Установка фамилии студента
void Student::set_last_name(std::string student_last_name)
{
	Student::last_name = student_last_name;
}

// Получение фамилии студента
std::string Student::get_last_name()
{
	return Student::last_name;
}

// Установка промежуточных оценок
void Student::set_scores(int student_scores[])
{
	for (int i = 0; i < 5; ++i) {
		if (student_scores[i] > 5) {
			throw ExScore("в функции set_scores()", student_scores[i]);
		}
		Student::scores[i] = student_scores[i];
	}
}
// Установка среднего балла
void Student::set_average_score(double ball)
{
	Student::average_score = ball;
}
// Получение среднего балла
double Student::get_average_score()
{
	return Student::average_score;
}

void Student::save() {
	std::ofstream fout("students.txt", std::ios::app);
	fout << Student::get_name() << " "
		<< Student::get_last_name() << " ";
	for (int i = 0; i < 5; ++i) {
		fout << Student::scores[i] << " ";
	}
	fout << std::endl;
	fout.close();
}

Student::~Student()
{
	Student::save();
}
