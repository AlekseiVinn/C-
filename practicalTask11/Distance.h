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
	// ����������� �� ���������
	Distance() : MTF(3.280833F), inches(0.0), feet(0) {};

	// ����������� � ����� �����������
	Distance(int ft, float in) : MTF(3.280833F), inches(in), feet(ft) {};

	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters; // ������� � ����
		this->feet = int (fltfeet); // ����� ������ �����
		this->inches = 12 * (fltfeet - this->feet); // ������� - ��� �����
	};

	void getdist()
	{
		std::cout << "\n������� ����� ����� : ";
		std::cin >> this->feet;
		std::cout << "\n������� ����� ������ : ";
		std::cin >> this->inches;
	}

	void showdist()
	{
		std::cout << this->feet << "� - " << this->inches << "\"\n";
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
