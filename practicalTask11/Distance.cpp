#include "Distance.h"
#include <stdexcept>


Distance Distance::operator+ (const Distance& d2) const
{
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}

Distance Distance::operator- (const Distance& d2) const
{
	if (feet < d2.feet && inches < d2.inches)
		throw std::logic_error("Нельзя вычитать большее растояние из меньшего");
	int f = feet - d2.feet;
	float i = inches - d2.inches;
	if (i <= -12) {
		i += 12.00;
		f--;
	}
	
	return Distance(f, i);
}

Distance& Distance::operator=(const Distance& d)
{
	if (this == &d)
		return *this;
	this->~Distance();
	return *new(this) Distance(d);
	
}

std::ostream& operator<< (std::ostream& out, const Distance& dist)
{
	out << dist.feet << "’ - " << dist.inches << "\"\n";
	return out;
}

Distance operator+(const Distance& d1, float f) {
	Distance d2 = Distance(f);

	return (d1 + d2);
}

Distance operator-(const Distance& d1, float f) {
	Distance d2 = Distance(f);

	return (d1 - d2);
}

Distance operator+(float f, const Distance& d1) {
	Distance d2 = Distance(f);

	return (d1 + d2);
}

Distance operator-(float f, const Distance& d1) {
	Distance d2 = Distance(f);

	return (d2 - d1);
}