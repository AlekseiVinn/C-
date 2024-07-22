#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
using std::string;
#include "practice2.h"

void isInCircle() {
	int x, y;
	std::cout << "Принадлежит ли точка полукругу с радиусом 3?" << std::endl;
	std::cout << "Введите x, y координаты точки: ";
	std::cin >> x >> y;

	if (x * x + y * y < 9 && y > 0) {
		std::cout << "точка (" << x << ", " << y << ") внутри полукруга" << std::endl;
	}
	else if (x * x + y * y > 9 || y < 0) {
		std::cout << "точка (" << x << ", " << y << ") снаружи полукруга" << std::endl;
	}
	else {
		std::cout << "точка (" << x << ", " << y << ") на границе полукруга" << std::endl;
	}

}

void carSwitch() {
	char op;
	std::cout << "Сделай свой выбор, собери авто свой мечты: ";
	std::cin >> op;

	switch (op)
	{
		case 'V':
			std::cout << "Кондиционер хочу\n";
		case 'S':
			std::cout << "Радио играть должно\n";
		default:
			std::cout << "Колеса круглые\n";
			std::cout << "Мощный двигатель\n";
	}
}

void euqlid() {
	int a, b, temp;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;

	while (a != b)
	{
		if (a > b)
			a -= b; 
		else
			b -= a;
	}
	std::cout << "НОД = " << a << std::endl;

}

void sinus() {
	double x, x1, x2, y;
	std::cout << "x1 = "; 
	std::cin >> x1;
	std::cout << "x2 = "; 
	std::cin >> x2;

	std::cout << "\tx\tsin(x)\n";
	x = x1;
	
	do
	{
		y = sin(x);
		std::cout << "\t" << x << "\t" << y << std::endl;
		x = x + 0.01;
	} while (x <= x2);

}

void forIter() {
	
	srand(time(NULL));
	int a, b, c;
	int k = 0, n = 10;

	for (int i = 1; i <= n; i++)
	{
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		std::cout << a << " * " << b << " = ";
		std::cin >> c;
		if (a * b != c)
		{
			k++;
			std::cout << "Error! ";
			std::cout << a << " * " << b << " = " << a * b << std::endl;
		}
	}
	std::cout << "Count error: " << k << std::endl;
	
}

void twoPointsSum() {
	int k, m, sum = 0;
	std::cout << "Введите k: ";
	std::cin >> k;
	std::cout << "Введите m: ";
	std::cin >> m;

	for (int i = 1; i <= 100; i++)
	{
		if ((i > k) && (i < m)) {
			continue;
		}
		sum += i;
	}
	std::cout << "Сумма чисел от 1 до " << k << " и от " << m << " до 100 = " << sum << std::endl;
}

bool isPrime(int num) {

	if (num < 2) 
		return false;
	if (num == 2) 
		return true;
	if (num % 2 == 0) 
		return false;
	for (int i = 3; (i * i) <= num; i += 2) {
		if (num % i == 0) 
			return false;
	}
	return true;
}

void isSuperPrime() {
	int num, k = 1;
	std::cout << "Введите число: ";
	std::cin >> num;

	if (isPrime(num)) {
		for (int i = 3; i <= num; i+=2) {
			if (isPrime(i))
				k++;
		}
		//std::cout << "k = " << k << std::endl;
		if (isPrime(k)) {
			std::cout << "Число " << num << " - суперпростое" << std::endl;
		}
		else {
			std::cout << "Число " << num << " - простое, но не суперпростое" << std::endl;
		}
	}
	else
	{
		std::cout << "Число " << num << " - не простое" << std::endl;
	}
}

bool snilsCheck() {
	string snils;
	int toCheck = 0;
	int checknum;
	std::cout << "Введите первый 9 цифр СНИЛС: ";
	std::cin >> snils;
	std::cout << "Введите последние 2 цифры СНИЛС: ";
	std::cin >> checknum;
		
	for (int i = snils.length(); i > 0; i--)
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

void greedyCoins() {
	int sum, temp;
	int tens=0, fives=0, twos=0, ones=0;
	std::cout << "Введите сумму рублей для размена: ";
	std::cin >> sum;
	temp = sum;

	if (sum > 0)
	{
		if (sum >= 10) {
			tens = sum / 10;
			sum = sum % 10;
		}
		if (sum >= 5) {
			fives = sum / 5;
			sum = sum % 5;
		}
		if (sum >= 2) {
			twos = sum / 2;
			sum = sum % 2;
		}
		ones = sum;
		sum = 0;

		std::cout << temp << " руб. монетами:\n";
		if (tens > 0)
			std::cout << "\t" << tens << " монет(а) по 10 руб.;\n";
		if (fives > 0)
			std::cout << "\t" << fives << " монет(а) по 5 руб.;\n";
		if (twos > 0)
			std::cout << "\t" << twos << " монет(а) по 2 руб.;\n";
		if (ones > 0)
			std::cout << "\t" << ones << " монет(а) по 1 руб.;\n";
		std::cout << std::endl;
	}
	else
	{
		std::cout << temp << " руб. монетами не разменять\n";
	}

}

struct MyPoint
{
	int x;
	int y;
};

double distance(MyPoint center, MyPoint shot)
{
	double dist = pow((center.x - shot.x), 2) + pow((center.y - shot.y), 2);
	return dist;
}

int getPoints(MyPoint center, MyPoint shot) {
	double dist = distance(center, shot);
	if (dist <= 1)
		return 10;
	else if (dist <= 4)
		return 5;
	else if (dist <= 9)
		return 1;
	else
		return 0;
}

void skillStatus(int tries)
{
	if (tries <= 7)
		std::cout << "Получил 50 очков за " << tries << " выстрелов - снайпер." << std::endl;
	else if (tries <= 10)
		std::cout << "Получил 50 очков за " << tries << " выстрелов - стрелок." << std::endl;
	else
		std::cout << "Получил 50 очков за " << tries << " выстрелов - новичок." << std::endl;
}

void targetPractice() {
	srand(time(0));

	MyPoint center;
	center.x = rand()%11;
	center.y = rand() % 11;

	std::cout << "Мишень со случайным центром в границе от 0 до 10 формата:\n\n";
	std::cout << "0----10points----1|----5points----2|----1point----3|----Zero----/" << std::endl;
	std::cout << "\nИгра до 50 очков." << std::endl;
	int score = 0;
	int tries = 0;

	std::cout << "\n~~~~~~~~~~~~~ HINT: " << center.x << ", " << center.y << " ~~~~~~~~~~~~~\n" << std::endl;

	while (score < 50){
		MyPoint shot;

		std::cout << "Сделайте выстрел (введите х, у): ";
		std::cin >> shot.x >> shot.y;
		tries++;
		int tryShot = getPoints(center, shot);
		if (tryShot > 0)
			std::cout << "Попал! " << tryShot << " очков!" << std::endl;
		else
			std::cout << "Мимо! Целься лучше!" << std::endl;
		score += tryShot;
	}

	skillStatus(tries);
	
}

