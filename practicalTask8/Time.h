#include <iostream>
#pragma once

class Time {
private:
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	friend std::ostream& operator<<(std::ostream &s, const Time &time);

public:
	Time() : hours(0), minutes(0), seconds(0) {}
	Time(int hrs, int min, int sec);


	Time operator+ (const Time& otherTime) {
		Time newTime;
		newTime.seconds = seconds + otherTime.seconds;
		if (newTime.seconds > 60) {
			newTime.seconds -= 60;
			newTime.minutes++;
		}
		newTime.minutes = newTime.minutes + minutes + otherTime.minutes;
		if (newTime.minutes > 60) {
			newTime.minutes -= 60;
			newTime.hours++;
		}
		newTime.hours = newTime.hours + hours + otherTime.hours;

		return newTime;
	}

	Time operator- (const Time& otherTime) {
		Time newTime;

		int allSeconds = 3600 * (hours - otherTime.hours) + 60 * (minutes - otherTime.minutes) + seconds - otherTime.seconds;
		newTime.hours = allSeconds / 3600;
		newTime.minutes = (allSeconds - newTime.hours * 3600) / 60;
		newTime.seconds = allSeconds - newTime.hours * 3600 - newTime.minutes * 60;


		return newTime;
	}
};