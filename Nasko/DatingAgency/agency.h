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
    int GetByPersonalID(long long);
    void PrintAllMembers();
    void DeletePerson();
    void PrintByPersonalID();
    void PrintByProfession();
    void PrintYoungestPerson();
    void DummyData();
    ~CAgency() { delete []m; } // Деструктор
};
