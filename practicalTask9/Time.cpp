#include <iostream>
#include <stdexcept>

#include "Time.h"

std::ostream& operator<<(std::ostream& s, const Time& time) {
	return s << time.hours << ":" << time.minutes << ":" << time.seconds;
}

//Time& Time::operator=(const Time& t)
//{
//	if (this == &t)
//		return *this;
//	this->~Time();
//	return *new(this) Time(t);
//
//}

Time operator+(const Time &time1, float otherTime) {
	Time time2 = Time(otherTime);
	return (time1 + time2);
}

Time operator+(float otherTime, const Time& time1) {
	Time time2 = Time(otherTime);
	return (time1 + time2);
}

Time operator-(const Time& time1, float otherTime) {
	Time time2 = Time(otherTime);
	return (time1 - time2);
}

Time operator-(float otherTime, const Time& time1) {
	Time time2 = Time(otherTime);
	return (time2 - time1);
}

bool Time::operator>(const Time& otherTime) const {
	return ((this->hours * this->HTS + this->minutes * 60 + this->seconds) >
		(otherTime.hours * otherTime.HTS + otherTime.minutes * 60 + otherTime.seconds));
}

bool Time::operator<(const Time& otherTime) const {
	return !(*this > otherTime);
}

bool Time::operator==(const Time& otherTime) const {
	return ((this->hours * this->HTS + this->minutes * 60 + this->seconds) ==
		(otherTime.hours * otherTime.HTS + otherTime.minutes * 60 + otherTime.seconds));
}

bool Time::operator!=(const Time& otherTime) const {
	return !(*this == otherTime);
}
