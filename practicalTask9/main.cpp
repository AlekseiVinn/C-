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

	////Практическок занятие 9. упражнение 1
	//std::cout << "Введите два целых числа для расчета их частного:\n";
	//int number1, number2; 
	//std::cin >> number1; 
	//std::cin >> number2; 
	//try {
	//	float result = quotient(number1, number2);
	//	std::cout << "Частное равно " << result << std::endl;
	//}
	//catch (DivideByZeroError& error) {
	//	std::cout << "ОШИБКА: "; 
	//	error.printMessage(); 
	//	return 1;
	//}
	
	
	////Практическок занятие 9. упражнение 2
	//std::cout << "Введите целое число для расчета их частных:\n";
	//int number1;
	//std::cin >> number1; 
	//for (int i = -10; i < 10; i++) {
	//	try { 
	//		float result = quotient(number1, i);
	//		std::cout << "Частное равно " << result << std::endl; 
	//	} 
	//	catch (DivideByZeroError& error) {
	//		std::cout << "ОШИБКА: "; 
	//		error.printMessage(); 
	//	} 
	//}
	

	////Практическок занятие 9. упражнение 3
	//std::string name03 = "Иван";
	//std::string last_name03 = "Иванов";
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
	//	std::cout << "Ошибка инициализации " << err.origin;
	//	std::cout << "\nВведенное значение оценки " << err.iValue << "является недопустимым" << std::endl;
	//	std::cout << "-----Error:------" << std::endl;
	//}
	//
	//delete stud03;


	////Практическок занятие 9. контрольное задание 1
	//int a, b, c;
	//a = rand() % 10 + 5;
	//b = rand() % 10 + 5;
	//c = rand() % 10 + 5;
	//std::cout << "Cтороны: " << a << ", " << b << ", " << c << std::endl;
	//Triangle tri = createTriangle(a, b, c);
	//tri.getInfo();
	//std::cout << "Площадь треугольника = " << tri.getArea();


	////Практическок занятие 9. контрольное задание 2
	//try {
	//	Time t1(-1, -59, 0);
	//	std::cout << t1 << std::endl;
	//}
	//catch (std::range_error& err) {
	//	std::cout << "---------Error---------" << std::endl;
	//	std::cout << "ОШИБКА: " << err.what() << std::endl;
	//	std::cout << "Type: " << typeid(err).name() << std::endl;
	//	std::cout << "---------Error---------" << std::endl;
	//}

	
	return 0;
}