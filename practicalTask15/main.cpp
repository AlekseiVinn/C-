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
    std::cout << "Введите имя и оценку студента: ";
    std::cin >> sg.name >> sg.grade;
    return sg;
}

void insertGrade(std::map<std::string, char>& journal, StudentGrade &studGr) {
    journal[studGr.name] = studGr.grade;
}

void printJournal(std::map<std::string, char>& journal) {
    std::cout << "Студент\t   \tОценка" << std::endl;
    for (auto item : journal) {
        std::cout << item.first<<"\t   \t" << item.second << std::endl;
    }
}


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    ////Практическое занятие 15. упражнение 1.
    //std::string name = "Бинго" ;
    //std::string last_name = "Бонго";
    //IdCard* idc = new IdCard(123456, "Базовый");
    //IdCard* idc2 = new IdCard(654321, "Базовый");
    //IdCard* idc0 = new IdCard(456789, "Специальный");
    //
    //Student* student02 = new Student(name, last_name, idc0);
    //Student student03("Петр", "Петров", idc2);
    //Student student04("Семен", "Смирнов", idc);
    //Student student05("Саша", "Коен", idc2);
    //Student student06("Дмитрий", "Ионов", idc0);
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
    //std::cout << "В группе " << gr1240.getName() << " " << k << " студентов." << std::endl;
    //gr1240.GroupOut();
    //
    //gr1240.delStudent(Student("Бинго", "Бонго"));
    //std::cout << "В группе " << gr1240.getName() << " " << k << " студентов." << std::endl;
    //gr1240.GroupOut();
    //
    //delete student02;


    ////Практическое занятие 15. упражнение 2.
    //IdCard* idc = new IdCard(123456, "Базовый");
    //IdCard* idc2 = new IdCard(654321, "Базовый");
    //IdCard* idc0 = new IdCard(456789, "Специальный");
    //Student* student02 = new Student("Бинго", "Бонго", idc0);
    //Student *student03 = new Student("Петр", "Петров", idc2);
    //Student *student04 = new Student("Семен", "Смирнов", idc);
    //Student *student05 = new Student("Саша", "Коен", idc2);
    //Student *student06 = new Student("Дмитрий", "Ионов", idc0);

    //Group gr1240("1240");
    //gr1240.addStudent(student02);
    //gr1240.addStudent(student03);
    //gr1240.addStudent(student04);
    //gr1240.addStudent(student05);
    //gr1240.addStudent(student06);
    //
    //int k = gr1240.getSize();
    //
    //std::cout << "В группе " << gr1240.getName() << " " << k << " студентов." << std::endl;
    //gr1240.GroupOut();
    //
    //gr1240.delStudent(new Student("Бинго", "Бонго"));
    //k = gr1240.getSize();
    //std::cout << "В группе " << gr1240.getName() << " " << k << " студентов." << std::endl;
    //gr1240.GroupOut();
    //
    //delete student02, student03, student04, student05, student06;

    
    ////Практическое занятие 15 контрольное задание 1.
    std::map<std::string, char> classJournal;
    classJournal["Иван"] = 'В';
    classJournal["Андрей"] = 'А';
    printJournal(classJournal);

    char flag = 'Y';
    while (flag == 'Y') {
        StudentGrade stGrade= createGrade();
        insertGrade(classJournal, stGrade);

        std::cout << "Желате продолжить? (Y/N): ";
        std::cin >> flag;
    }
    printJournal(classJournal);



    return 0;
}


