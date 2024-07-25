#include <iostream>
#include <string>
using std::string;
#include <regex>
#include "practice3.h"

void privet(string name)
{
	std::cout << name << ", " << "hello!" << std::endl;
}

void privet(string name, int k)
{
	std::cout << name << ", " << "hello! " << "you input " << k << std::endl;
}

long double firBinSearch(double a, int n)
{
	double L = 0;
	double R = a;
	while (R - L > 1e-10)
	{
		double M = (L + R) / 2;
		if (pow(M, n) < a)
		{
			L = M;
		}
		else
		{
			R = M;
		}
	}
	return R;
}

int addNumders(int n)
{
	if (n == 1) 
		return 1;
	else 
		return (n + addNumders(n - 1));
}

int gcd(int m, int n)
{
	if (n == 0) return m;
	return gcd(n, m % n);
}

bool isDigits(string snils) {
	std::regex badsnils("[^0-9 -]");
	if (std::regex_search(snils, badsnils)) 
		return false;
	return true;
}

bool snilsCheck(string snils) {
	if (isDigits(snils)) {
		std::erase(snils, ' ');
		std::cout << snils << std::endl;
		std::erase(snils, '-');
		std::cout << snils << std::endl;
		
		if (snils.length() != 11)
			return false;

		int toCheck = 0;
		int checknum = stoi(snils.substr(9, 2));

		for (int i = snils.length()-2; i > 0; i--)
		{
			if (i >= 3) {
				if (snils[i - 1] == snils[i - 2] && snils[i - 2] == snils[i - 3]) {
					std::cout << "Three same digits" << std::endl;
					return false;
				}
			}
			//std::cout << snils[i - 1];
			toCheck += int(snils[i - 1]) * (10 - i);
		}

		if (toCheck < 100)
			return toCheck == checknum;
		if (toCheck == 100 || toCheck == 101)
			return checknum == 00;
		if (toCheck > 101) {
			toCheck = toCheck % 101;
			if (toCheck < 100)
				return toCheck == checknum;
			if (toCheck == 100)
				return checknum == 00;
		}
	}
	return false;
}


double cubert(int num) {
	double R = num;
	double L = 1;
	while (abs(R - L) > 1e-5)
	{
		R = 1.0 / 3 * (num / (R * R) + 2 * R);
		L = 1.0 / 3 * (num / (R * R) + 2 * R);
	}
	return L;
}


double triArea(int a) {
	
	double halfperimetr = 1.5 * a;
	double area = sqrt(halfperimetr * pow((halfperimetr - a), 3));
	return area;
}


double triArea(int a, int b, int c) {
	double halfperimetr = (a + b + c) / 2.0;
	double area = sqrt(halfperimetr * (halfperimetr - a) * (halfperimetr - b) * (halfperimetr - c));
	return area;
}

int sumSeq(int n) {
	if (n > 0) {
		return 5 * n + sumSeq(n - 1);
	}
	return 0;
}

long long toBinary(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n >= 2) {
		if (n % 2 == 0)
			return 10 * toBinary(n / 2);
		return 1 + 10 * toBinary(n / 2);
	}
}