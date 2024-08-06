bool isTriangle(const int& a, const int& b, const int& c);

#pragma once
class Triangle
{
public:

	double triArea(const int& a, const int& b, const int& c) const;

	double getArea();

	void getInfo();

private:
	int side1{};
	int side2{};
	int side3{};
	double area{};

	Triangle(int a, int b, int c) {
		if (!isTriangle(a,b,c))
			throw std::exception("Заданные отрезки не подходят для создания треугольника");
		Triangle::side1 = a;
		Triangle::side2 = b;
		Triangle::side3 = c;
		
	}

	friend double getArea();
	friend double triArea(const int& a, const int& b, const int& c);
	friend bool isTriangle(const int& a, const int& b, const int& c);
	friend void getInfo();
	friend Triangle createTriangle(const int&, const int&,const int&);
};

Triangle createTriangle(const int&, const int&, const int&);

