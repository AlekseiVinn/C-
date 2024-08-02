

struct Distance {
	int feet;
	double inches;

	void ShowDist() {
		std::cout << feet << "\'-" << inches << "\"\n";
	}
};

Distance AddDist(const Distance&, const Distance&);

Distance InputDist();

void ShowDist(Distance);

Distance RandDist();

//typedef std::tuple<std::string, int, double> Tuple;
using Tuple = std::tuple<std::string, int, double>;

void printTupleOfThree(Tuple);

Tuple funtup(std::string, int, double);
Tuple allNullTuple(Tuple test);


using TupleTwo = std::tuple<int, double>;

TupleTwo funTwoTuple(Tuple);

void printTupleOfTwo(TupleTwo);

struct Time {
	int hours = 0;
	int minutes = 0;
	int seconds = 0;

	void printTime() {
		std::cout << "Часы: " << hours << "  ";
		std::cout << "минуты: " << minutes << "  ";
		std::cout << "секунды: " << seconds << "  " << std::endl;
	}

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

Time createTime(int, int, int);
Time createTime(int, int);
Time createTime(int);

struct QuadEqRoots
{
	double x1 = -INFINITY;
	double x2 = -INFINITY; 

	void showRoots() {
		if (x1 == x2 && x1 != -INFINITY) {
			std::cout << "Найден 1 корень квадратного уравнения: x=" << x1 << std::endl;
		}
		else if (x1 == -INFINITY) {
			std::cout << "Корни квадратного уравнения не найдены" << std::endl;
		} else
			std::cout << "Корни квадратного уравнения: x1 = " << x1 << "; x2 = " << x2 << std::endl;
	}
};

QuadEqRoots Myroot(double&, double&, double&);

using FlaggedQuadRoots = std::tuple<int, double, double>;

FlaggedQuadRoots MyrootTuple(double&, double&, double&);
