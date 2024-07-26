#include <iostream>
#include <cmath>
#include "practise4.h"

void fum_value(double k, double x, double y)
{
	x = x + k;
	y = y + k;
}
void fum_ptr(double k, double* x, double* y)
{
	*x = *x + k;
	*y = *y + k;
}
void fum_ref(double k, double& x, double& y)
{
	x = x + k;
	y = y + k;
}
void print(double x, double y)
{
	std::cout << "x = " << x << "; y = " << y << std::endl;
}

void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void swap(int &x, int &y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int Myroot(double a, double b, double c, double &x1, double &x2) {
	if (a == 0) {
		x1 = -c / b;
		x2 = x1;
		return 0;
	}
	double discr = b * b - 4 * a * c;
	if (discr < 0)
		return -1;
	else if (discr == 0) {
		x1 = -b / (2 * a);
		x2 = x1;
		return 0;
	}
	else {
		x1 = (-b + sqrt(discr)) / (2*a);
		x2 = (-b - sqrt(discr)) / (2 * a);
		return 1;
	}
}

bool Input(int& a, int& b) {
	std::cout << "¬ведите число а = ";
	std::cin >> a;
	std::cout << "¬ведите число b = ";
	std::cin >> b;
	if (a == b)
		return true;
	return false;
}