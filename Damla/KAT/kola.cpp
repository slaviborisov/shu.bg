#include "kola.h"
#include <iostream>
#include <string>
using namespace std;


CKola::CKola()
{
  marka = "";
  cvqt = "";
  reg_nomer = "";
  godina = 0;
  sobstvenik = "";
}

CKola::CKola
(
  string m,
  string c,
  string r,
  int g,
  string s
)
{
  marka = m;
  cvqt = c;
  reg_nomer = r;
  godina = g;
  sobstvenik = s;
}

int CKola::operator<(CKola kola)
{
	return (this->godina < kola.godina);
}

void CKola::Add()
{
  cout<<"Въведете марка на автомобила: ";
  cin.ignore(cin.rdbuf()->in_avail() + 1); //Игнорира паразитните Ентъри
  getline(cin,marka);

  cout<<"Въведете цвят на автомобила: ";
  getline(cin,cvqt);

  cout<<"Въведете регистрационен номер на автомобила: ";
  getline(cin,reg_nomer);

  cout<<"Въведете година на производство: ";
  cin>>godina;

  cout<<"Въведете собственик: ";
  cin.ignore(cin.rdbuf()->in_avail() + 1); //Игнорира паразитните Ентъри
  getline(cin,sobstvenik);
}

void CKola::Print()
{
  cout<<marka<<"\t"<<cvqt<<"\t"<<reg_nomer<<"\t"<<godina<<"\t"<<sobstvenik<<"\t"<<endl;
}
