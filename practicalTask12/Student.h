#include "Human.h"
#include <string>
#include <vector>

#pragma once
class Student : public Human {
public:

	void setInfo() {
		Human::setInfo();

		std::cout << "������� ������� ����������� 10 ���������������� �������� �� 0 � 5" << std::endl;
		for (int i = 0; i < 10; i++)
		{
			scores.push_back(rand() % 6);
		}
	}

	void getInfo() {
		Human::getInfo();
		std::cout << "������� ���� : " << get_average_score() << std::endl;
	}

	// ��������� �������� ����� ��������
	float get_average_score()
	{
		// ����� ���������� ������
		unsigned int count_scores = this->scores.size();
		// ����� ���� ������ ��������
		unsigned int sum_scores = 0;
		// ������� ����
		float average_score;
		for (int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		return average_score;
	}
private:
	// ������ ��������
	std::vector<int> scores;
};
