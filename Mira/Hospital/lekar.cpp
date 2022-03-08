#include "lekar.h"
#include <iostream>
#include <string>
using namespace std;


CLekar::CLekar()
{
  number = 0;
  name = "";
  vuzrast = 0;
  data_na_postupvane = "";
  specialnost = "";
}

CLekar::CLekar
(
  unsigned int l_number,
  string l_name,
  unsigned int l_vuzrast,
  string l_data_na_postupvane,
  string l_specialnost
)
{
  number = l_number;
  name = l_name;
  vuzrast = l_vuzrast;
  data_na_postupvane = l_data_na_postupvane;
  specialnost = l_specialnost;
}

int CLekar::operator<(CLekar lekar)
{
	return (this->vuzrast < lekar.vuzrast);
}

void CLekar::Add()
{
  cout<<"Въведете идентификационен номер: ";
  cin>>number;

  cout<<"Въведете име: ";
  cin.ignore(cin.rdbuf()->in_avail() + 1); //Игнорира паразитните Ентъри
  getline(cin,name);

  cout<<"Въведете възраст ";
  cin>>vuzrast;

  cout<<"Въведете дата на постърване ";
  cin.ignore(cin.rdbuf()->in_avail() + 1); //Игнорира паразитните Ентъри
  getline(cin,data_na_postupvane);

  cout<<"Въведете специалност(медицинско направление): ";
  cin>>specialnost;
}

void CLekar::Print()
{
  cout<<number<<"\t"<<name<<"\t"<<vuzrast<<"\t"<<data_na_postupvane<<"\t"<<specialnost<<"\t"<<endl;
}
