#include <iostream>
#include <exception>
#include "Triangle.h"

bool isTriangle(const int& a, const int& b, const int& c) {
	//if ((a >= b + c) || (b >= a + c) || (c >= a + b))
	//	throw std::exception("Заданные отрезки не подходят для создания треугольника");
	return !((a >= b + c) || (b >= a + c) || (c >= a + b));
}

double Triangle::triArea(const int& a, const int& b, const int& c) const {
	double halfperimetr = (a + b + c) / 2.0;
	double area = sqrt(halfperimetr * (halfperimetr - a) * (halfperimetr - b) * (halfperimetr - c));
	return area;
}

double Triangle::getArea() {
	if (!(Triangle::side1 == 0 || Triangle::side2 == 0 || Triangle::side3 == 0)) {
		if (Triangle::area == 0) {
			Triangle::area = triArea(Triangle::side1, Triangle::side2, Triangle::side3);
			return Triangle::area;
		}
	}
}

void Triangle::getInfo() {
	if (!(Triangle::side1 == 0 || Triangle::side2 == 0 || Triangle::side3 == 0))
		std::cout << "Треугольник со сторонами:" << side1 << ", " << side2 << ", " << side3 << "." << std::endl;
}

Triangle createTriangle(const int& a, const int& b, const int& c) {
	try {
		Triangle tri = Triangle(a, b, c);
		return tri;
	}
	catch (const std::exception& err) {
		std::cout << "---------Error---------" << std::endl;
		std::cout << "ОШИБКА: " << err.what() << std::endl;
		std::cout << "Type: " << typeid(err).name() << std::endl;
		std::cout << "---------Error---------" << std::endl;
	}
}