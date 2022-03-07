#include "uchitel.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


CUchitel::CUchitel()
{
  ime = "";
  egn = 0;
  vuzrast = 0;
  disciplina = "";
  trudov_staj = 0;
}

CUchitel::CUchitel(string n, long int e, int v, string d, int t)
{
  ime = n;
  egn = e;
  vuzrast = v;
  disciplina = d;
  trudov_staj = t;
}

void CUchitel::Add()
{
  cout<<"Въведете име: ";
  cin.ignore(cin.rdbuf()->in_avail() + 1);//игнорира паразитните Ентъри
  getline(cin,ime);

  cout<<"Въведете ЕГН: ";
  cin>>egn;

  cout<<"Въведете възраст: ";
  cin>>vuzrast;

  cout<<"Въведете дисциплина: ";
  cin.ignore(cin.rdbuf()->in_avail() + 1);//игнорира паразитните Ентъри
  getline(cin,disciplina);

  cout<<"Въведете трудов стаж: ";
  cin>>trudov_staj;
}

void CUchitel::Print()
{
  cout <<ime<<"\t"<<egn<<"\t"<<vuzrast<<"\t"<<disciplina<<"\t"<<trudov_staj<<endl;
}

int CUchitel::operator>(CUchitel u)
{
	return (this->trudov_staj > u.trudov_staj);
}
