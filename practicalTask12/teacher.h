#include "Human.h"
#include <string>
#pragma once
class Teacher : public Human {
public:
	void setInfo() {
		Human::setInfo();
		std::cout << "������� ���������� ������� �����: ";
		std::cin >> work_time;
	}

	void getInfo() {
		Human::getInfo();
		std::cout << "���������� ������� �����: " << get_work_time() << std::endl;
	}
	
	unsigned int get_work_time() {
		return this->work_time;
	}

private:
	unsigned int work_time;
};

