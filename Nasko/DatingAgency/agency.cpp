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

void CAgency::PrintByPersonalID()
{
  long long personal_id;
  cout<<"Въведете ЕГН на клиента: ";
  cin>>personal_id;

  int index = GetByPersonalID(personal_id);
  if(index > 0) {
     m[index].Print();
  }
}

void CAgency::PrintByProfession()
{
  string profession;
  cout<<"Въведете професия на клиента: ";
  cin>>profession;

    for(int i = 0; i < total_members; i++)
      if (profession == m[i].GetProfession())
        m[i].Print();
}

void CAgency::PrintYoungestPerson()
{
  int sex;
  float weight;
  string profession;
  cout<<"Въведете пол на клиента (0 - Мъж, 1 - Жена): ";
  cin>>sex;

  cout<<"Въведете тегло на клиента: ";
  cin>>weight;

  cout<<"Въведете професия на клиента: ";
  cin>>profession;


  CPerson person(0, "", 0, sex, 100, weight, profession, "Walk");

  for(int i = 0; i < total_members; i++)
    if (sex == m[i].GetSex() && weight == m[i].GetWeight() && profession == m[i].GetProfession())
      if(m[i] < person) {
        person = m[i];
      }


  if(person.GetPersonalID() > 0) {
    cout<<"Най-младия клиент със сходни качества е: \n";
    person.Print();
  }
  else cout<<"Няма намерен клиент със сходни качества! \n";
}
