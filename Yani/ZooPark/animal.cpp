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
  cout<<"Въведете рег. номер на животно: ";
  cin.ignore(cin.rdbuf()->in_avail() + 1); //Игнорира паразитните Ентъри
  getline(cin,reg_number);

  cout<<"Въведете име на животно: ";
  getline(cin,name);

  cout<<"Въведете възраст на животно: ";
  cin>>age;

  cout<<"Въведете пол на животно(0 - Мъжко, 1 - Женско): ";
  cin>>sex;

  cout<<"Въведете вид животно(пример: Лъв, Слон, Тигър, Сърна): ";
  cin>>kind;

  cout<<"Въведете вид храна(0 - Растителна, 1 - Животинска): ";
  cin>>food_type;

  cout<<"Въведете количество храна: ";
  cin>>food_amount;
}

void CAnimal::Print()
{
  cout<<reg_number<<"\t"<<name<<"\t"<<age<<"\t"<<sex<<"\t"<<kind<<"\t"<<food_type<<"\t"<<food_amount<<endl;
}
