#include <iostream>
#include <windows.h>
#include <string>
#include "student.h"
#include "IdCard.h"
#include "Group.h"

struct StudentGrade {
    std::string name;
    char grade;
};

StudentGrade createGrade() {
    StudentGrade sg;
    std::cout << "������� ��� � ������ ��������: ";
    std::cin >> sg.name >> sg.grade;
    return sg;
}

void insertGrade(std::map<std::string, char>& journal, StudentGrade &studGr) {
    journal[studGr.name] = studGr.grade;
}

void printJournal(std::map<std::string, char>& journal) {
    std::cout << "�������\t   \t������" << std::endl;
    for (auto item : journal) {
        std::cout << item.first<<"\t   \t" << item.second << std::endl;
    }
}


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    ////������������ ������� 15. ���������� 1.
    //std::string name = "�����" ;
    //std::string last_name = "�����";
    //IdCard* idc = new IdCard(123456, "�������");
    //IdCard* idc2 = new IdCard(654321, "�������");
    //IdCard* idc0 = new IdCard(456789, "�����������");
    //
    //Student* student02 = new Student(name, last_name, idc0);
    //Student student03("����", "������", idc2);
    //Student student04("�����", "�������", idc);
    //Student student05("����", "����", idc2);
    //Student student06("�������", "�����", idc0);
    //
    //Group gr1240("1240");
    //gr1240.addStudent(*student02);
    //gr1240.addStudent(student03);
    //gr1240.addStudent(student04);
    //gr1240.addStudent(student05);
    //gr1240.addStudent(student06);
    //
    //int k = gr1240.getSize();
    //gr1240.GroupSort();
    //
    //std::cout << "� ������ " << gr1240.getName() << " " << k << " ���������." << std::endl;
    //gr1240.GroupOut();
    //
    //gr1240.delStudent(Student("�����", "�����"));
    //std::cout << "� ������ " << gr1240.getName() << " " << k << " ���������." << std::endl;
    //gr1240.GroupOut();
    //
    //delete student02;


    ////������������ ������� 15. ���������� 2.
    //IdCard* idc = new IdCard(123456, "�������");
    //IdCard* idc2 = new IdCard(654321, "�������");
    //IdCard* idc0 = new IdCard(456789, "�����������");
    //Student* student02 = new Student("�����", "�����", idc0);
    //Student *student03 = new Student("����", "������", idc2);
    //Student *student04 = new Student("�����", "�������", idc);
    //Student *student05 = new Student("����", "����", idc2);
    //Student *student06 = new Student("�������", "�����", idc0);

    //Group gr1240("1240");
    //gr1240.addStudent(student02);
    //gr1240.addStudent(student03);
    //gr1240.addStudent(student04);
    //gr1240.addStudent(student05);
    //gr1240.addStudent(student06);
    //
    //int k = gr1240.getSize();
    //
    //std::cout << "� ������ " << gr1240.getName() << " " << k << " ���������." << std::endl;
    //gr1240.GroupOut();
    //
    //gr1240.delStudent(new Student("�����", "�����"));
    //k = gr1240.getSize();
    //std::cout << "� ������ " << gr1240.getName() << " " << k << " ���������." << std::endl;
    //gr1240.GroupOut();
    //
    //delete student02, student03, student04, student05, student06;

    
    ////������������ ������� 15 ����������� ������� 1.
    std::map<std::string, char> classJournal;
    classJournal["����"] = '�';
    classJournal["������"] = '�';
    printJournal(classJournal);

    char flag = 'Y';
    while (flag == 'Y') {
        StudentGrade stGrade= createGrade();
        insertGrade(classJournal, stGrade);

        std::cout << "������ ����������? (Y/N): ";
        std::cin >> flag;
    }
    printJournal(classJournal);



    return 0;
}


