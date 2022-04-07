#pragma once
#include "person.h"
#include <string>
using namespace std;

class CAgency {
  private:
    int total_members;
    string agency_name;
    CPerson *m;

  public:
    CAgency();
    CAgency(string);
    void AddPerson();
    void PrintPerson();
    void PrintAllMembers();
    int GetByPersonalID(long long);
    void DeletePerson();
    // void PrintStudentByParams();
    // void StudentsLessThanAge();
    // void StudentsLessThanWeight();
    // void TheHeaviestStudent();
    void DummyData();
    ~CAgency() { delete []m; } // Деструктор
};
