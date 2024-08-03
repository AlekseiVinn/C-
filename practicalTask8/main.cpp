#include <iostream>
#include <string>
#include <Windows.h>
#include "Student.h"
#include "Time.h"



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	////Практическое занятие 8 упражнение 1-2
	//Student stud01;
	//std::string name;
	//std::string last_name;
	//int scores[5];
	//
	//std::cout << "Name: ";
	//std::getline(std::cin, name);
	//
	//std::cout << "Last name: ";
	//std::getline(std::cin, last_name);
	//
	//int sum = 0;
	//for (int i = 0; i < 5; i++)
	//{
	//	std::cout << "Score " << i + 1 << ": ";
	//	scores[i] = rand() % 11;
	//	std::cout << scores[i] << std::endl;
	//	sum += scores[i];
	//}
	//stud01.set_name(name);
	//stud01.set_last_name(last_name);
	//stud01.set_scores(scores);
	//double average_score = sum / 5.0;
	//stud01.set_average_score(average_score);
	//std::cout << "Average ball for " << stud01.get_name() << " "
	//	<< stud01.get_last_name() << " is "
	//	<< stud01.get_average_score() << std::endl;


	////Практическое занятие 8 упражнение 3
	//Student* stud02 = new Student;
	//std::string name02;
	//std::string last_name02;
	//
	//std::cout << "Name: ";
	//std::getline(std::cin, name02);
	//std::cout << "Last name: ";
	//std::getline(std::cin, last_name02);
	//int scores02[5];
	//int sum02 = 0;
	//for (int i = 0; i < 5; ++i) {
	//	std::cout << "Score " << i + 1 << ": ";
	//	scores02[i] = rand()%10+1;
	//	std::cout << scores02[i] << std::endl;
	//	sum02 += scores02[i];
	//}
	//
	//stud02->set_name(name02);
	//stud02->set_last_name(last_name02);
	//stud02->set_scores(scores02);
	//float average_score02 = sum02 / 5.0;
	//stud02->set_average_score(average_score02);
	//
	//std::cout << "Average ball for " << stud02->get_name() << " "
	//	<< stud02->get_last_name() << " is "
	//	<< stud02->get_average_score() << std::endl;
	//delete stud02;

	////Практическое занятие 8 упражнение 4-5
	//std::string name03 = "Иван";
	//std::string last_name03 = "Иванов";
	//Student *stud03 = new Student(name03, last_name03);
	//int scores03[5];
	//int sum03 = 0;
	//for (int i = 0; i < 5; ++i) {
	//	std::cout << "Score " << i + 1 << ": ";
	//	scores03[i] = rand()%10 +1;
	//	sum03 += scores03[i];
	//}
	//stud03->set_scores(scores03);
	//double average_score03 = sum03 / 5.0;
	//stud03->set_average_score(average_score03);
	//std::cout << "Average ball for " << stud03->get_name() << " "
	//	<< stud03->get_last_name() << " is "
	//	<< stud03->get_average_score() << std::endl;
	//delete stud03;

	
	////Практическое занятие 8 контрольное задание 1
	//Time time1{ 10, 62, 62 };
	//Time time2{ 10, 59, 59 };
	//Time time3 = time1 + time2;
	//Time time4 = time1 - time2;
	//Time time5 = time2 - time1;
	//std::cout << "Время 1: " << time1 << std::endl;
	//std::cout << "Время 2: " << time2 << std::endl;
	//std::cout << "Время 3: " << time3 << std::endl;
	//std::cout << "Время 4: " << time4 << std::endl;
	//std::cout << "Время 5: " << time5 << std::endl;



	return 0;
}