#pragma once /* ������ �� �������� ����������� ������������� ����� */
#include "IdCard.h"
#include <string>
#include <map>


using namespace std;

class Student
{
    public:
		// ����������� ������ Student
        Student(std::string, std::string, IdCard*);
        Student(std::string, std::string);
		Student();

        // ��������� ����� ��������
        void set_name(string);
        // ��������� ����� ��������
        string get_name();
        // ��������� ������� ��������
        void set_last_name(string);
        // ��������� ������� ��������
        string get_last_name();
        // ��������� ������������� ������
        void set_scores(int []);
        // ��������� �������� �����
        void set_average_score(double);
        // ��������� �������� �����
        double get_average_score();
		// ����� ���������� � ��������
		void display() const; 

		void setIdCard(IdCard *c);
		IdCard getIdCard();

    private:
        // ������������� ������
        int scores[5];
        // ������� ����
        double average_score;
        // ���
        string name;
        // �������
        string last_name;
		// ��������
		IdCard *iCard;
		
        friend bool operator< (const Student&, const Student&);
        friend bool operator> (const Student&, const Student&);
        friend bool operator== (const Student&, const Student&);
        friend bool operator!= (const Student&, const Student&);

};

class compareStudent
{
public:
    bool operator() (const Student* ptrSt1, const Student* ptrSt2) const
    {
        return *ptrSt1 < *ptrSt2;
    }
};

