#pragma once
class Student
{
public:
	Student(std::string, std::string);
	~Student();
	void set_name(std::string);
	std::string get_name();
	void set_last_name(std::string student_last_name);
	std::string get_last_name();
	void set_scores(int student_scores[]);
	void set_average_score(double ball);
	double get_average_score();
	void save();
	
private:
	int scores[5]; 
	double average_score; 
	std::string name; 
	std::string last_name; 
};
