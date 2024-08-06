#include "Triangle.h"
#include <exception>
#include <iostream>
#include <iomanip>
#include <cmath>

Triangle::Triangle(Dot& aa, Dot& bb, Dot& cc) {
	double side1 = aa.distanceTo(bb);
	double side2 = bb.distanceTo(cc);
	double side3 = aa.distanceTo(cc);
	
	try
	{
		if (!isTriangle(side1, side2, side3))
			throw std::exception("Заданные отрезки не подходят для создания треугольника");
		this->a = &aa;
		this->b = &bb;
		this->c = &cc;

		this->side1 = side1;
		this->side2 = side2;
		this->side3 = side3;
	}
	catch (const std::exception& err)
	{
		std::cout << "---------Error---------" << std::endl;
		std::cout << "ОШИБКА: " << err.what() << std::endl;
		std::cout << "Type: " << typeid(err).name() << std::endl;
		std::cout << "---------Error---------" << std::endl;
	}
	
}

Triangle::Triangle() {
	for (int i = 0; i < 3; i++)	{
		std::cout << "Введите координаты точки (ввод формата х,у) " << i+1 << ": ";
		int x, y;
		char c;
		std::cin >> x;
		std::cin >> c;
		std::cin >> y;
		switch (i){
			case 0:
				Triangle::a = new Dot(x, y);
				break;
			case 1:
				Triangle::b = new Dot(x, y);
				break;
			case 2:
				Triangle::c = new Dot(x, y);
				break;
		}
	}
	
	double side1 = (*Triangle::a).distanceTo(*Triangle::b);
	double side2 = (*Triangle::b).distanceTo(*Triangle::c);
	double side3 = (*Triangle::a).distanceTo(*Triangle::c);
	
	try	{
		if (!isTriangle(side1, side2, side3))
			throw std::exception("Заданные отрезки не подходят для создания треугольника");

		Triangle::side1 = side1;
		Triangle::side2 = side2;
		Triangle::side3 = side3;
	}
	catch (const std::exception& err) {
		std::cout << "---------Error---------" << std::endl;
		std::cout << "ОШИБКА: " << err.what() << std::endl;
		std::cout << "Type: " << typeid(err).name() << std::endl;
		std::cout << "---------Error---------" << std::endl;
	}
	
}


bool Triangle::isTriangle(const double& a, const double& b, const double& c) {
	return !((a >= b + c) || (b >= a + c) || (c >= a + b));
}

void Triangle::setPerimetr() {
	Triangle::perimetr = Triangle::side1 + Triangle::side2 + Triangle::side3;
}

double Triangle::getPerimetr() {
	if (Triangle::perimetr == 0) {
		Triangle::setPerimetr();
	}
	return Triangle::perimetr;
}

void Triangle::setArea() {
	double halfP = this->perimetr / 2;
	this->area = sqrt((halfP * (halfP - this->side1) * (halfP - this->side2) * (halfP - this->side3)));
}

double Triangle::getArea() {
	if (Triangle::area == 0) {
		Triangle::setArea();
	}
	return Triangle::area;
}


void Triangle::printSides() {
	std::cout << "сторона 1 = " << this->side1<<
		", " << "сторона 2 = " << this->side2 <<
		", " << "сторона 3 = " << this->side3 << std::endl;
}

