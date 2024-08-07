#pragma once
#include <iostream>
class Distance
{
private:
	const float MTF;
	float inches;
	int feet;
	
	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);

public:
	// конструктор по умолчанию
	Distance() : MTF(3.280833F), inches(0.0), feet(0) {};

	// конструктор с двум€ параметрами
	Distance(int ft, float in) : MTF(3.280833F), inches(in), feet(ft) {};

	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters; // перевод в футы
		this->feet = int (fltfeet); // число полных футов
		this->inches = 12 * (fltfeet - this->feet); // остаток - это дюймы
	};

	void getdist()
	{
		std::cout << "\n¬ведите число футов : ";
		std::cin >> this->feet;
		std::cout << "\n¬ведите число дюймов : ";
		std::cin >> this->inches;
	}

	void showdist()
	{
		std::cout << this->feet << "Т - " << this->inches << "\"\n";
	}
	Distance operator+ (const Distance&) const;
	Distance operator- (const Distance&) const;

	Distance& operator= (const Distance&);

	operator float() const
	{
		float fracfeet = this->inches/ 12;
		fracfeet += static_cast<float>(this->feet);
		return (float)(fracfeet / MTF);
	}

	friend Distance operator+(const Distance& d1, float f);
	friend Distance operator-(const Distance& d1, float f);
	friend Distance operator+(float f, const Distance& d1);
	friend Distance operator-(float f, const Distance& d1);
};
