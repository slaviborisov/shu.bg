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
  cout<<"�������� ��� �� ������a: ";
  cin.ignore(cin.rdbuf()->in_avail()); //�������� ����������� ������
  getline(cin,name);

  cout<<"�������� ����: ";
  cin>>grade;

  cout<<"�������� ��������� - ������(�, ����� �����, �������� �����): ";
  cin.ignore(cin.rdbuf()->in_avail()); //�������� ����������� ������
  getline(cin,section);

  cout<<"�������� ����� � �����: ";
  cin>>number;

  cout<<"�������� �������: ";
  cin>>age;

  cout<<"�������� ���� ";
  cin>>height;

  cout<<"�������� ����� ";
  cin>>weight;
}

void CStudent::Print()
{
  cout <<name<<"\t"<<grade<<"\t"<<section<<"\t"<<number<<"\t"<<age<<"\t"<<height<<"\t"<<weight<<endl;
}
