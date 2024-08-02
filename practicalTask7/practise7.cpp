#include <iostream>
#include <cmath>
#include <tuple>
#include <string>
#include "practise7.h"



Distance AddDist(const Distance &d1, const Distance &d2)
{
	Distance d;
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;
	if (d.inches >= 12.0)
	{
		d.inches -= 12.0;
		d.feet++;
	}
	return d;
}

Distance InputDist()
{
	Distance d;
	std::cout << "\n¬ведите число футов: ";
	std::cin >> d.feet;
	std::cout << "¬ведите число дюймов: ";
	std::cin >> d.inches;
	return d;
}

void ShowDist(Distance d)
{
	std::cout << d.feet << "\'-" << d.inches << "\"\n";
}

Distance RandDist()
{
	
	Distance d;
	d.feet = rand() % 20;
	d.inches = (double)(rand() % 12);

	//std::cout << "Dist = ";
	//d.ShowDist();
	return d;
}


void printTupleOfThree(Tuple t)
{
	std::cout << "("
		<< std::get<0>(t) << ", "
		<< std::get<1>(t) << ", "
		<< std::get<2>(t) << ")" << std::endl;
}

Tuple funtup(std::string s, int a, double d)
{
	s.insert(0, "!!-");
	s.append("-!!");
	return std::make_tuple(s, a, d * 10);
}

Tuple allNullTuple(Tuple test) {
	auto a = std::get<0>(test);
	auto b = std::get<1>(test);
	auto c = std::get<2>(test);
	a = "null";
	b -= b;
	c -= c;
	return std::make_tuple(a, b, c);
}

TupleTwo funTwoTuple(Tuple test) {
	int a;
	double b;
	std::tie(std::ignore, a, b) = test;
	return std::make_tuple(a, b);
}

void printTupleOfTwo(TupleTwo t)
{
	std::cout << "("
		<< std::get<0>(t) << ", "
		<< std::get<1>(t) << ")" << std::endl;
}

Time createTime(int a, int b, int c) {
	Time interval{a,b,c};
	return interval;
}

Time createTime(int a, int b) {
	Time interval;
	interval.minutes = a;
	interval.seconds = b;
	return interval;
}

Time createTime(int a) {
	Time interval;
	interval.seconds = a;
	return interval;
}


QuadEqRoots Myroot(double &a, double &b, double &c) {
	QuadEqRoots solution{};
	if (a == 0) {
		solution.x1 = -c / b;
		solution.x2 = solution.x1;
		return solution;
	}
	double discr = b * b - 4 * a * c;
	if (discr < 0) {
		solution.x1 = solution.x2 = -INFINITY;

	}
	else if (discr == 0) {
		solution.x1 = -b / (2 * a);
		solution.x2 = solution.x1;
		//return solution;
	}
	else {
		solution.x1 = (-b + sqrt(discr)) / (2 * a);
		solution.x2 = (-b - sqrt(discr)) / (2 * a);
		//return solution;
	}
	return solution;
}

FlaggedQuadRoots MyrootTuple(double& a, double& b, double& c) {
	if (a == 0) {
		return std::make_tuple(0, (-c/b), NULL);
	}
	double discr = b * b - 4 * a * c;
	if (discr < 0) {
		return std::make_tuple(-1, NULL, NULL);
	}
	else if (discr == 0) {
		double x = -b / (2 * a);
		return std::make_tuple(0, x, NULL);
	}
	else {
		double x1 = (-b + sqrt(discr)) / (2 * a);
		double x2 = (-b - sqrt(discr)) / (2 * a);
		return std::make_tuple(1, x1, x2);
	}
}
