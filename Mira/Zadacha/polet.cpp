#include "polet.h"
#include <iostream>
#include <string>
using namespace std;

Polet::Polet()
{
  polet_nomer = 0;
  samolet = "";
  napravlenie = "";
  vreme_na_polet = 0;
  chas_izlitane = "";
  ime_na_letishte = "";
}

Polet::Polet(int p, string s, string n, float v, string c, string i)
{
  polet_nomer = p;
  samolet = s;
  napravlenie = n;
  vreme_na_polet = v;
  chas_izlitane = c;
  ime_na_letishte = i;
}

void Polet::Add()
{
  cout<<"Добавете полет: ";
  cin>>polet_nomer;

  cout<<"Добавете тип самолет: ";
  cin.ignore(cin.rdbuf()->in_avail() + 1); //Игнорира паразитните Ентъри
  getline(cin,samolet);

  cout<<"Добавете направлевние: ";
  cin.ignore(cin.rdbuf()->in_avail() + 1); //Игнорира паразитните Ентъри
  getline(cin,napravlenie);

  cout<<"Време на полет: ";
  cin>>vreme_na_polet;

  cout<<"Добавете час на излитане: ";
  cin.ignore(cin.rdbuf()->in_avail() + 1); //Игнорира паразитните Ентъри
  getline(cin,chas_izlitane);

  cout<<"Добавете тип самолет: ";
  getline(cin,ime_na_letishte);
}

void Polet::Print()
{
  cout<<polet_nomer<<"\t"<<samolet<<"\t"<<napravlenie<<"\t"<<vreme_na_polet<<"\t"<<chas_izlitane<<"\t"<<ime_na_letishte<<endl;
}
