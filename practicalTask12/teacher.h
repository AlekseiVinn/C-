#include "Human.h"
#include <string>
#pragma once
class Teacher : public Human {
public:
	void setInfo() {
		Human::setInfo();
		std::cout << "Введите количество рабочих часов: ";
		std::cin >> work_time;
	}

	void getInfo() {
		Human::getInfo();
		std::cout << "Количество рабочих часов: " << get_work_time() << std::endl;
	}
	
	unsigned int get_work_time() {
		return this->work_time;
	}

private:
	unsigned int work_time;
};

