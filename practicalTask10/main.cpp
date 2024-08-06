#include <windows.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cmath>
#include "IdCard.h"
#include "Student.h"
#include "Dot.h"
#include "Triangle.h"


int main() {
	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	////Практическок занятие 10. упражнение 1
	//IdCard idc(123, "Базовый");
	//std::string name = "Ivan";
	//std::string last_name = "Ivanov";
	//Student *student02 = new Student(name, last_name, &idc);
	//std::cout << "IdCard: " << student02->getIdCard().getNumber() << std::endl;
	//std::cout << "Category: " << student02->getIdCard().getCategory() << std::endl;

	//Практическок занятие 10. контрольное задание 1
	Dot dot1(1, 1);
	Dot dot2(1, 9);
	Dot dot3(9, 1);

	std::cout << "---------------------------------------" << std::endl;
	Triangle *triangle1 = new Triangle(dot1, dot2, dot3);
	std::cout << "Треугольник 1:" << std::endl;
	triangle1->printSides();
	std::cout << "периметр = " << triangle1->getPerimetr() << std::endl;
	std::cout << "площадь = " << triangle1->getArea() << std::endl;

	std::cout << "---------------------------------------" << std::endl;
	Triangle* triangle2 = new Triangle();
	std::cout << std::setprecision(4);
	std::cout << "Треугольник 2:" << std::endl;
	triangle2->printSides();
	std::cout << "периметр = " << triangle2->getPerimetr() << std::endl;
	std::cout << "площадь = " << triangle2->getArea() << std::endl;


	delete triangle1;
	delete triangle2;
	return 0;
}