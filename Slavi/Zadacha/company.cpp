#include "company.h"
#include <iostream>
#include <string>
using namespace std;

CCompany::CCompany()
{
  m = NULL;
  count = 0;
  cout<< "Въведете име на фирмата: ";
  getline(cin,name);
}

CCompany::CCompany(int _count, string _name)
{
  count = _count;
  name = _name;
  m = NULL;
}

void CCompany::Add()
{
   CSoftware *p = m;
  m = new CSoftware[count + 1];
  for(int i = 0; i < count; i++)
    m[i] = p[i];
  m[count].Add();
  count++;
  delete []p;
}

void CCompany::PrintAll()
{
  for(int i = 0; i < count; i++)
    m[i].Print();
}


void CCompany::PrintProductsBySize()
{
  int size;
  cout<<"Въведете обем на продукта в мегабайти: ";
  cin>>size;

  for(int i = 0; i < count; i++)
    if (m[i].GetSize() > size)
      cout<<m[i].GetProductName()<<endl;
}

void CCompany::PrintTurnoverByCompany()
{
  string manufacturer;
  cout<<"Въведете името на фирмата производител: ";
  cin.ignore();
  getline(cin,manufacturer);

  float turnover = 0;
  for(int i = 0; i < count; i++)
    if (manufacturer == m[i].GetМanufacturer())
      cout<< m[i].GetPrice() * m[i].GetTotalSalse();
}

