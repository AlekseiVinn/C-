#include "StudentGrade.h"
#include <vector>
#include <string>

#pragma once
class GradeMap
{
private:
	std::vector<StudentGrade> m_map;
public:
	GradeMap() {};
	char& operator[](const std::string& name);
};

