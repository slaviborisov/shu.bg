#include "person.h"
#include <iostream>
#include <string>
using namespace std;


CPerson::CPerson()
{
  reg_id = 0;
  name = "";
  personal_id = 0;
  sex = 0;
  age = 0;
  weight = 0;
  profession = "";
  hobby = "";
}

CPerson::CPerson(unsigned _reg_id, string _name, long long _personal_id, unsigned _sex,
  unsigned _age, float _weight, string _profession, string _hobby
)
{
  reg_id = _reg_id;
  name = _name;
  personal_id = _personal_id;
  sex = _sex;
  age = _age;
  weight = _weight;
  profession = _profession;
  hobby = _hobby;
}

int CPerson::operator<(CPerson person)
{
	return (this->age < person.age);
}

void CPerson::Add()
{
  cout<<"Въведете рег. номер на клиента: ";
  cin>>reg_id;

  cout<<"Въведете име на клиента: ";
    cin.ignore();; //Игнорира паразитните Ентъри
  getline(cin,name);

  cout<<"Въведете ЕГН: ";
  cin>>personal_id;

  cout<<"Въведете Пол (0 - Мъж, 1 - Жена): ";
  cin>>sex;

  cout<<"Въведете възраст: ";
  cin>>age;

  cout<<"Въведете тегло: ";
  cin>>weight;

  cout<<"Въведете професия: ";
  cin.ignore(); //Игнорира паразитните Ентъри
  getline(cin,profession);

  cout<<"Въведете Хоби: ";
  cin.ignore(); //Игнорира паразитните Ентъри
  getline(cin,hobby);
}

void CPerson::Print()
{
  cout <<reg_id<<"\t"<<name<<"\t"<<personal_id<<"\t"<<sex<<"\t"<<age<<"\t"<<weight;
  cout <<"\t"<<profession<<"\t"<<hobby<<endl;
}
