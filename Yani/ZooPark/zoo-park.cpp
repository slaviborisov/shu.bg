#include "zoo-park.h"
#include <iostream>
#include <string>
using namespace std;

CZooPark::CZooPark()
{
	m = NULL;
  count_animals = 0;
  cout<< "Въведете име на Зоологическа градина: ";
  getline(cin,name);
}

CZooPark::CZooPark(string a_name)
{
	m = NULL;
  count_animals = 0;
  name = a_name;
}

int CZooPark::FindAnimalByRegNumber(string reg_nomer)
{
  for(int i = 0; i < count_animals; i++)
    if (reg_nomer == m[i].GetRegNomer()) return i;
  return -1;
}

void CZooPark::AddAnimal()
{
  CAnimal *p = m;
  m = new CAnimal[count_animals + 1];
  for(int i = 0; i < count_animals; i++)
    m[i] = p[i];
  m[count_animals].Add();
  count_animals++;
  delete []p;
}

void CZooPark::PrintAnimals()
{
  for(int i = 0; i < count_animals; i++)
    m[i].Print();
}

void CZooPark::DeleteAnimal()
{
  string reg_number;
  cout<<"Въведете регистрационен номер на животно: ";
  cin>>reg_number;

  if(FindAnimalByRegNumber(reg_number) != -1) {
    CAnimal *p = m;
    m = new CAnimal[count_animals - 1];

    int j, i;
    for(j = 0, i = 0; i < count_animals; i++)
      if(p[i].GetRegNomer() != reg_number)
        m[j++] = p[i];
    count_animals--;
    delete []p;
  }
  else
    cout<<"Няма въведена животно с този рег. номер! \n";
}

void CZooPark::GetAnimalsByKind()
{
  string kind;
  cout<<"Въведете вид на животно: ";
  cin.ignore(cin.rdbuf()->in_avail()); //Игнорира паразитните Ентъри
  getline(cin,kind);

  for(int i = 0; i < count_animals; i++)
    if(m[i].GetKind() == kind)
      cout<<m[i].GetName()<<"\t"<<m[i].GetAge()<<endl;
}

void CZooPark::PrintTheOldestAnimal()
{
  string kind;
  cout<<"Въведете вид на животно: ";
  cin.ignore(cin.rdbuf()->in_avail()); //Игнорира паразитните Ентъри
  getline(cin,kind);

  CAnimal animal("", "", 0, 0, kind, 0, 0);
  for(int i = 0; i < count_animals; i++)
    if(m[i].GetKind() == kind)
      if(m[i] > animal)
        animal = m[i];

  if(animal.GetName() != "")
    animal.Print();
  else
    cout<<"Не беше намерено животно \n";
}

