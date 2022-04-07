#include "agency.h"
#include <iostream>
#include <string>
using namespace std;

CAgency::CAgency()
{
	m = NULL;
  total_members = 0;
  cout<< "Въведете име на агенцията: ";
  getline(cin,agency_name);
}

CAgency::CAgency(string _agency_name)
{
	m = NULL;
  total_members = 0;
  agency_name = _agency_name;
}

int CAgency::GetByPersonalID(long long personal_id)
{
  for(int i = 0; i < total_members; i++)
    if (personal_id == m[i].GetPersonalID()) return i;
  return -1;
}

void CAgency::AddPerson()
{
  CPerson *p = m;
  m = new CPerson[total_members + 1];
  for(int i = 0; i < total_members; i++)
    m[i] = p[i];
  m[total_members].Add();
  total_members++;
  delete []p;
}

void CAgency::PrintAllMembers()
{
  for(int i = 0; i < total_members; i++)
    m[i].Print();
}

void CAgency::DeletePerson()
{
  long long personal_id;
  cout<<"Въведете ЕГН на клиента: ";
  cin>>personal_id;

  if(GetByPersonalID(personal_id) != -1) {
    CPerson *p = m;
    m = new CPerson[total_members - 1];

    int j, i;
    for(j = 0, i = 0; i < total_members; i++)
      if(p[i].GetPersonalID() != personal_id)
        m[j++] = p[i];
    total_members--;
    delete []p;
  }
  else {
    cout<<"Не беше намерен клиент по въведеното ЕГН!";
  }
}

// void CAgency::PrintStudentByParams()
// {
//   int grade;
//   cout<<"Въведете клас на ученика: ";
//   cin>>grade;

//   string section;
//   cout<<"Въведете паралелка на ученика: ";
//   cin.ignore(); //Игнорира паразитните Ентъри
//   getline(cin,section);

//   int number;
//   cout<<"Въведете номер на ученика: ";
//   cin>>number;

//   bool hasStudent = false;
//   for(int i = 0; i < total_members; i++)
//     if(m[i].GetGrade() == grade && m[i].GetSection() == section && m[i].GetNumber() == number) {
//       m[i].Print();
//       hasStudent = true;
//     }

//   if(hasStudent == false) {
//     cout<<"Не намерихме ученик!"<<endl;
//   }
// }

// void CAgency::StudentsLessThanAge()
// {
//   int age;
//   cout<<"Въведете възраст на ученика: ";
//   cin>>age;
//   for(int i = 0; i < total_members; i++)
//     if(age > m[i].GetAge() )
//       cout<<m[i].GetName()<<" | ";
// }

// void CAgency::StudentsLessThanWeight()
// {
//   int weight;
//   cout<<"Въведете тегло: ";
//   cin>>weight;
//   for(int i = 0; i < total_members; i++)
//     if(weight > m[i].GetWeight() )
//       m[i].Print();
// }

// void CAgency::TheHeaviestStudent()
// {
//   int grade;
//   cout<<"Въведете клас: ";
//   cin>>grade;
//   CPerson student("", 0, "", 0, 0, 0, grade);
//   for(int i = 0; i < total_members; i++)
//     if(grade == m[i].GetGrade() )
//       if(m[i] > student)
//         student = m[i];
//   cout<<"Най-тежкият ученик е: "<<student.GetName()<<endl;
// }

void CAgency::DummyData()
{
  m = new CPerson[6];
  m[0] = CPerson(1, "Слави", 1, 0, 36, 75, "Developer", "Tenis");
  m[1] = CPerson(1, "Младен", 2, 0, 38, 81, "Logistic", "Tenis");
  m[2] = CPerson(1, "Мария", 3, 0, 31, 65, "Director", "Jogging");
  m[3] = CPerson(1, "Яна", 4, 0, 28, 60, "Cosmetic", "Hikings");
  m[4] = CPerson(1, "Виктор", 5, 0, 36, 84, "Financier", "Garden");
  m[5] = CPerson(1, "Таня", 6, 0, 36, 49, "Chef Cooker", "Walk");
  total_members = 6;


  // CPerson::CPerson(int _reg_id, string _name, int _personal_id, int _sex, int _age,
  // float _weight, string _profession, string _hobbys
}
