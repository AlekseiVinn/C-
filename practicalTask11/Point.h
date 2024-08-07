#include <cmath>
#include <iostream>
#include <string>
#pragma once
class Point
{
private:
	int x;
	int y;
	double dist;

	friend std::ostream& operator<< (std::ostream& out, const Point& p);

public:
	Point(int a, int b) : x(a), y(b) {
		dist = sqrt(pow(x, 2) + pow(y, 2));
	};

	bool operator>(const Point& p) const {
		return (this->dist > p.dist);
	}

	bool operator<(const Point& p) const {
		return (!(*this > p));
	}
};


//std::ostream& operator<< (std::ostream& out, const Point& p);
