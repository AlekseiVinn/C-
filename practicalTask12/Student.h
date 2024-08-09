#include "Human.h"
#include <string>
#include <vector>

#pragma once
class Student : public Human {
public:

	void setInfo() {
		Human::setInfo();

		std::cout << "Дневник ученика заполняется 10 псевдослучайными оценками от 0 д 5" << std::endl;
		for (int i = 0; i < 10; i++)
		{
			scores.push_back(rand() % 6);
		}
	}

	void getInfo() {
		Human::getInfo();
		std::cout << "Средний балл : " << get_average_score() << std::endl;
	}

	// Получение среднего балла студента
	float get_average_score()
	{
		// Общее количество оценок
		unsigned int count_scores = this->scores.size();
		// Сумма всех оценок студента
		unsigned int sum_scores = 0;
		// Средний балл
		float average_score;
		for (int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		return average_score;
	}
private:
	// Оценки студента
	std::vector<int> scores;
};
