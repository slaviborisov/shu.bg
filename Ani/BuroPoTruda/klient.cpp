#include "klient.h"
#include <iostream>
#include <string>
using namespace std;

string media_types[2] = { "Видеокасета", "DVD"};
string statuses[2]    = { "Свободна", "Заета" };

CKlient::CKlient()
{
  reg_nomer = 0;
  ime = "";
  egn = 0;
  pol = 0;
  vuzrast = 0;
  profesiq = "";
  staj = 0;
}

CKlient::CKlient(int r, string i, long int e, int p, int v, string prof, int s)
{
  reg_nomer = r;
  ime = i;
  egn = e;
  pol = p;
  vuzrast = v;
  profesiq = prof;
  staj = s;
}

int CKlient::operator>(CKlient klient)
{
  return (this->staj > klient.staj);
}

void CKlient::Add()
{
  cout<<"Въведете рег. номер: ";
  cin>>reg_nomer;

  cout<<"Въведете име: ";
  cin.ignore(cin.rdbuf()->in_avail() + 1);
  getline(cin,ime);

  cout<<"Въведете ЕГН: ";
  cin>>egn;

  cout<<"Въведете пол: ";
  cin>>pol;

  cout<<"Въведете възраст: ";
  cin>>vuzrast;

  cout<<"Въведете професия: ";
  cin.ignore(cin.rdbuf()->in_avail() + 1);
  getline(cin,profesiq);

  cout<<"Въведете трудов стаж: ";
  cin>>staj;
}

void CKlient::Print()
{
  cout <<reg_nomer<<"\t"<<ime<<"\t"<<egn<<"\t";
  cout<<(pol == 0 ? "Мъж" : "Жена")<<"\t";
  cout<<"\t"<<vuzrast<<"\t"<<profesiq<<"\t"<<staj<<endl;
}
