#include <iostream>
#include <string>
#include <Windows.h>
#include <ctime>
#include <cmath>
#include <stdexcept>
#include "DivideByZeroError.h"
#include "Student.h"
#include "Time.h"
#include "Triangle.h"




int main() {
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	////������������ ������� 9. ���������� 1
	//std::cout << "������� ��� ����� ����� ��� ������� �� ��������:\n";
	//int number1, number2; 
	//std::cin >> number1; 
	//std::cin >> number2; 
	//try {
	//	float result = quotient(number1, number2);
	//	std::cout << "������� ����� " << result << std::endl;
	//}
	//catch (DivideByZeroError& error) {
	//	std::cout << "������: "; 
	//	error.printMessage(); 
	//	return 1;
	//}
	
	
	////������������ ������� 9. ���������� 2
	//std::cout << "������� ����� ����� ��� ������� �� �������:\n";
	//int number1;
	//std::cin >> number1; 
	//for (int i = -10; i < 10; i++) {
	//	try { 
	//		float result = quotient(number1, i);
	//		std::cout << "������� ����� " << result << std::endl; 
	//	} 
	//	catch (DivideByZeroError& error) {
	//		std::cout << "������: "; 
	//		error.printMessage(); 
	//	} 
	//}
	

	////������������ ������� 9. ���������� 3
	//std::string name03 = "����";
	//std::string last_name03 = "������";
	//Student *stud03 = new Student(name03, last_name03);
	//int scores03[5];
	//int sum03 = 0;
	//for (int i = 0; i < 5; ++i) {
	//	std::cout << "Score " << i + 1 << ": ";
	//	scores03[i] = rand()%10 +1;
	//	sum03 += scores03[i];
	//	std::cout << scores03[i] << std::endl;
	//}
	//
	//try {
	//	stud03->set_scores(scores03);
	//	double average_score03 = sum03 / 5.0;
	//	stud03->set_average_score(average_score03);
	//	std::cout << "Average ball for " << stud03->get_name() << " "
	//		<< stud03->get_last_name() << " is "
	//		<< stud03->get_average_score() << std::endl;
	//}
	//catch (Student::ExScore& err) {
	//	std::cout << "-----Error:------" << std::endl;
	//	std::cout << "������ ������������� " << err.origin;
	//	std::cout << "\n��������� �������� ������ " << err.iValue << "�������� ������������" << std::endl;
	//	std::cout << "-----Error:------" << std::endl;
	//}
	//
	//delete stud03;


	////������������ ������� 9. ����������� ������� 1
	//int a, b, c;
	//a = rand() % 10 + 5;
	//b = rand() % 10 + 5;
	//c = rand() % 10 + 5;
	//std::cout << "C������: " << a << ", " << b << ", " << c << std::endl;
	//Triangle tri = createTriangle(a, b, c);
	//tri.getInfo();
	//std::cout << "������� ������������ = " << tri.getArea();


	////������������ ������� 9. ����������� ������� 2
	//try {
	//	Time t1(-1, -59, 0);
	//	std::cout << t1 << std::endl;
	//}
	//catch (std::range_error& err) {
	//	std::cout << "---------Error---------" << std::endl;
	//	std::cout << "������: " << err.what() << std::endl;
	//	std::cout << "Type: " << typeid(err).name() << std::endl;
	//	std::cout << "---------Error---------" << std::endl;
	//}

	
	return 0;
}