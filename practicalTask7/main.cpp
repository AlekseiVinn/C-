#include <Windows.h>
#include <iostream>
#include <ctime>
#include <tuple>
#include <vector>
#include <string>
#include "practise7.h"



int main() {
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	////ѕрактическое зан€тие 7. упражнение 1.
	//Distance d1 = InputDist();
	//Distance d2 = { 1, 6.25 };
	//Distance d3 = AddDist(d1, d2);
	//
	//ShowDist(d1);
	//d2.ShowDist();
	//ShowDist(d3);


	////ѕрактическое зан€тие 7. упражнение 3.
	//int n;
	//std::cout << "¬ведите размер массива рассто€ний ";
	//std::cin >> n;
	//Distance *masDist = new Distance[n];
	//for (int i = 0; i < n; i++)
	//{
	//	masDist[i] = RandDist(); 
	//	ShowDist(masDist[i]);
	//}
	//
	//Distance distSum{};
	//for (int i = 0; i < n; i++)
	//{
	//	distSum = AddDist(masDist[i], distSum);
	//	std::cout << i << " - ";
	//	distSum.ShowDist();
	//}
	//
	//delete[] masDist;


	////ѕрактическое зан€тие 7. упражнение 4-5
	//std::vector<std::string> v1{ "one", "two", "three", "four", "five", "six" };
	//std::vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
	//std::vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
	//
	//Tuple tupl0 = std::make_tuple(v1[0],v2[0],v3[0]);
	//printTupleOfThree(tupl0);
	//
	//auto tupl1 = funtup(v1[1], v2[1], v3[1]);
	//printTupleOfThree(tupl1);
	//
	//auto tupl2 = allNullTuple(std::make_tuple(v1[2], v2[2], v3[2]));
	//printTupleOfThree(tupl2);
	//
	//auto tuple3 = funtup(v1[3], v2[3], v3[3]);
	//printTupleOfThree(tuple3);
	//
	//auto twoTuple = funTwoTuple(tuple3);
	//printTupleOfTwo(twoTuple);


	////ѕрактическое зан€тие 7. контрольное задание 1
	//int a, b, c;
	//std::cout << "¬ведите секунды, минуты и часы: " << std::endl;
	//std::cout << "секунды = ";
	//std::cin >> a;
	//std::cout << "минуты = ";
	//std::cin >> b;
	//std::cout << "часы = ";
	//std::cin >> c;
	//
	//Time time0 = createTime(c, b, a);
	//time0.printTime();
	//
	//int t1 = rand() % 60;
	//int t2 = rand() % 60;
	//int t3 = rand() % 60;
	//Time time1 = createTime(t1, t2);
	//time1.printTime();
	//Time time2 = createTime(t3);
	//time2.printTime();
	//Time time3 = time1 + time2;
	//time3.printTime();
	//Time time4 = createTime(10);
	//Time time6 = createTime(1,12);
	//Time time7 = createTime(1,1,12);
	//
	//Time t1 = time4 - time6;
	//Time t2 = time4 - time7;
	//Time t3 = time6 - time7;
	//
	//time4.printTime();
	//time6.printTime();
	//time7.printTime();
	//t1.printTime();
	//t2.printTime();
	//t3.printTime();


	////ѕрактическое зан€тие 7. контрольное задание 2
	//double a = rand()%10 - rand() % 10;
	//double b = rand() % 20 - rand() % 20;
	//double c = rand() % 20 - rand() % 20;
	//std::cout << " вадратное уравнение:" << std::endl;
	//std::cout << a <<"*x^2 + " << b << "*x + "<< c << std::endl;
	//QuadEqRoots roots = Myroot(a, b, c);
	//roots.showRoots();


	////ѕрактическое зан€тие 7. контрольное задание 3
	//double a1 = rand() % 10 - rand() % 10;
	//double b1 = rand() % 20 - rand() % 20;
	//double c1 = rand() % 20 - rand() % 20;
	//std::cout << "квадратное уравнение:" << std::endl;
	//std::cout << a1 <<"*x^2 + " << b1 << "*x + "<< c1 << std::endl;
	//FlaggedQuadRoots results = MyrootTuple(a1, b1, c1);
	//int& flag = std::get<0>(results);
	//if (flag == -1) {
	//	std::cout << " орни квадратного уравнени€ не найдены" << std::endl;
	//}
	//else if (flag == 0) {
	//	std::cout << "Ќайден 1 корень квадратного уравнени€: x=" << std::get<1>(results) << std::endl;
	//}
	//else if (flag == 1) {
	//	std::cout << " орни квадратного уравнени€: x1 = " << std::get<1>(results) << "; x2 = " << std::get<2>(results) << std::endl;
	//}

	return 0;
}