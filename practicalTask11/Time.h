#include <iostream>
#include <cmath>
#pragma once

class Time {
private:
	int hours;
	int minutes;
	int seconds;
	const int HTS;
	friend std::ostream& operator<<(std::ostream& s, const Time& time);

	friend Time operator+(const Time& time1, float otherTime);
	friend Time operator+(float otherTime, const Time& time1);
	friend Time operator-(const Time& time1, float otherTime);
	friend Time operator-(float otherTime, const Time& time1);

public:
	Time() : hours(0), minutes(0), seconds(0), HTS(3600) {};

	Time(int hrs, int min, int sec) : HTS(3600) {
		if (hrs < 0 || min < 0 || sec < 0)
			throw std::range_error("Нельзя создавать временные метки с отрицательными значениями");

		Time::seconds = sec % 60;
		Time::minutes = (min + sec / 60) % 60;
		Time::hours = hrs + (min + sec / 60) / 60;
	};

	Time(float hrs) :HTS(3600) {
		if (hrs < 0)
			throw std::range_error("Нельзя создавать временные метки с отрицательными значениями");
		
		float fullHours;
		float restHour = std::modf(hrs, &fullHours);

		Time::seconds = static_cast<int>(restHour*HTS) % 60;
		Time::minutes = Time::seconds / 60;
		Time::hours = static_cast<int>(fullHours);
	};

	operator float() const
	{
		float secods = this->hours * this->HTS + this->minutes * 60 + this->seconds;
		return (float)(seconds / this->HTS);
	}

	Time operator+ (const Time& otherTime) const {
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

	Time operator- (const Time& otherTime) const {
		Time newTime;
		int allSeconds = 3600 * (hours - otherTime.hours) + 60 * (minutes - otherTime.minutes) + seconds - otherTime.seconds;
		if (allSeconds < 0)
			throw std::logic_error("Нельзя получить отрицательное время");
		newTime.hours = allSeconds / 3600;
		newTime.minutes = (allSeconds - newTime.hours * 3600) / 60;
		newTime.seconds = allSeconds - newTime.hours * 3600 - newTime.minutes * 60;


		return newTime;
	}

	bool operator>(const Time& otherTime) const;
	bool operator<(const Time& otherTime) const;
	bool operator==(const Time& otherTime) const;
	bool operator!=(const Time& otherTime) const;

	Time& operator=(const Time& t);
	//friend Time operator+(const Time& time1, float otherTime);
	//friend Time operator+(float otherTime, const Time& time1);
	//friend Time operator-(const Time& time1, float otherTime);
	//friend Time operator-(float otherTime, const Time& time1);
};

