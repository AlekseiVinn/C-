#include "Dot.h"
#pragma once
class Triangle
{
private:
	Dot* a;
	Dot* b;
	Dot* c;
	double side1{};
	double side2{};
	double side3{};
	double perimetr{};
	double area{};

	void setPerimetr();
	friend double getPerimetr();

	void setArea();
	friend double getArea();
	friend void printSides();

public:
	Triangle(Dot& aa, Dot& bb, Dot& cc);
	Triangle();

	static bool isTriangle(const double& a, const double& b, const double& c);

	double getPerimetr();
	double getArea();
	void printSides();


};

