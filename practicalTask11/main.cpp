#include <Windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Distance.h"
#include "StudentGrade.h"
#include "GradeMap.h"
#include "Time.h"
#include "Point.h"


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	////Практическок занятие 11. упражнение 1-2
	//Distance dist2, dist3, dist4, dist5;
	////Distance dist1 = 2.25F;
	//Distance dist1;
	//dist1.getdist();
	//dist2.getdist();
	//dist3 = dist1 + dist2;
	//dist4 = dist1 + dist2 - dist3;
	////dist5 = dist4 - dist1;
	//std::cout << "\ndist1 = " << dist1 << std::endl;
	//std::cout << "\ndist2 = " << dist2 << std::endl;
	//std::cout << "\ndist3 = " << dist3 << std::endl;
	//std::cout << "\ndist4 = " << dist4 << std::endl;
	////std::cout << "\ndist5 = ";
	////std::cout << dist5 << std::endl;
	//float mtrs;
	//mtrs = static_cast<float>(dist1);
	//std::cout << mtrs << std::endl;
	//mtrs = dist2 + dist1;
	//std::cout << mtrs << std::endl;

	////Практическок занятие 11. упражнение 3
	//Distance d1(11, 11);
	//Distance d2 = d1 + 2.5F;
	//std::cout << d1 << std::endl;
	//std::cout << d2 << std::endl;

	////Практическок занятие 11. упражнение 4
	//GradeMap grades;
	//grades["John"] = 'A';
	//grades["Martin"] = 'B';
	//std::cout << "John has a grade of " << grades["John"] << std::endl;
	//std::cout << "Martin has a grade of " << grades["Martin"] << std::endl;
	//std::cout << "New name and grade?" << std::endl;
	//std::string name;
	//char grade;
	//std::cin >> name >> grade;
	//grades[name] = grade;
	//std::cout << name << " has a grade of " << grades[name] << std::endl;


	////Практическок занятие 11. контрольное задание 1
	//Time t1 = 2.5F;
	//Time t2 = 2.5F;
	//Time t3 = t2 + t1;
	//std::cout << "T1: " << t1 << std::endl;
	//std::cout << "T2: " << t1 << std::endl;
	//std::cout << "T1+T2: " << t1+t2 << std::endl;
	//std::cout << "T3: " << t3 << std::endl;
	//std::cout << "T3-T1: " << t3-t1 << std::endl;
	//std::cout << "T1==T2: " << std::boolalpha << (t1 == t2) << std::endl;
	//std::cout << "T1>T3: " << std::boolalpha << (t1 > t3) << std::endl;
	
	
	////Практическок занятие 11. контрольное задание 2
	std::vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	std::sort(v.begin(), v.end()); // требуется перегрузка оператора < для // класса Point
	for (auto& point : v)
		std::cout << point << '\n'; // требуется перегрузка оператора << для // класса Point

	return 0;
}