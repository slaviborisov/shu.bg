#include "student.h"
#include <iostream>
#include <string>
using namespace std;


CStudent::CStudent()
{
  name = "";
  grade = 0;
  section = "";
  number = 0;
  age = 0;
  height = 0;
  weight = 0;
}

CStudent::CStudent(string s_name, int s_grate, string s_section, int s_number,
  int s_age, int s_height, int s_weight
)
{
  name = s_name;
  grade = s_grate;
  section = s_section;
  number = s_number;
  age = s_age;
  height = s_height;
  weight = s_weight;
}

int CStudent::operator>(CStudent student)
{
	return (this->weight > student.weight);
}

void CStudent::Add()
{
  cout<<"Въведете име на ученикa: ";
  cin.ignore(cin.rdbuf()->in_avail()); //Игнорира паразитните Ентъри
  getline(cin,name);

  cout<<"Въведете клас: ";
  cin>>grade;

  cout<<"Въведете паралелка - пример(А, Чужди езици, Природни науки): ";
  cin.ignore(cin.rdbuf()->in_avail()); //Игнорира паразитните Ентъри
  getline(cin,section);

  cout<<"Въведете номер в класа: ";
  cin>>number;

  cout<<"Въведете възраст: ";
  cin>>age;

  cout<<"Въведете ръст ";
  cin>>height;

  cout<<"Въведете тегло ";
  cin>>weight;
}

void CStudent::Print()
{
  cout <<name<<"\t"<<grade<<"\t"<<section<<"\t"<<number<<"\t"<<age<<"\t"<<height<<"\t"<<weight<<endl;
}
