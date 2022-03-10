#include "animal.h"
#include <iostream>
#include <string>
using namespace std;

CAnimal::CAnimal()
{
  reg_number = "";
  name = "";
  age = 0;
  sex = 0;
  kind = "";
  food_type = 0;
  food_amount = 0;
}

CAnimal::CAnimal(string r, string n, int a, int s, string k, int ft, float fa)
{
  reg_number = r;
  name = n;
  age = a;
  sex = s;
  kind = k;
  food_type = ft;
  food_amount = fa;
}

int CAnimal::operator>(CAnimal animal)
{
	return (this->age > animal.age);
}

void CAnimal::Add()
{
  cout<<"�������� ���. ����� �� �������: ";
  cin.ignore(cin.rdbuf()->in_avail()); //�������� ����������� ������
  getline(cin,reg_number);

  cout<<"�������� ��� �� �������: ";
  getline(cin,name);

  cout<<"�������� ������� �� �������: ";
  cin>>age;

  cout<<"�������� ��� �� �������(0 - �����, 1 - ������): ";
  cin>>sex;

  cout<<"�������� ��� �������(������: ���, ����, �����, �����): ";
  cin>>kind;

  cout<<"�������� ��� �����(0 - ����������, 1 - ����������): ";
  cin>>food_type;

  cout<<"�������� ���������� �����: ";
  cin>>food_amount;
}

void CAnimal::Print()
{
  cout<<reg_number<<"\t"<<name<<"\t"<<age<<"\t"<<sex<<"\t"<<kind<<"\t"<<food_type<<"\t"<<food_amount<<endl;
}
