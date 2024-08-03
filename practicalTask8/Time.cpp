#include <iostream>

#include "Time.h"

Time::Time(int hrs, int min, int sec) {
	Time::seconds = sec % 60;
	Time::minutes = (min + sec / 60) % 60;
	Time::hours = hrs + (min + sec / 60) / 60;
}

std::ostream& operator<<(std::ostream& s, const Time& time) {
	return s << time.hours << ":" << time.minutes << ":" << time.seconds;
}

//
//Time createTime(int a, int b, int c) {
//	Time interval{ a,b,c };
//	return interval;
//}
//
//Time createTime(int a, int b) {
//	Time interval;
//	interval.minutes = a;
//	interval.seconds = b;
//	return interval;
//}
//
//Time createTime(int a) {
//	Time interval;
//	interval.seconds = a;
//	return interval;
//}