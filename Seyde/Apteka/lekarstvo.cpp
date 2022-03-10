#include "lekarstvo.h"
#include <iostream>
#include <string>
using namespace std;


CLekasrtvo::CLekasrtvo()
{
  ime = "";
  kat_nomer = "";
  razfasovka = "";
  cena = 0;
  kolichestvo = 0;
}

CLekasrtvo::CLekasrtvo(string i, string kat, string r, float c, int kol)
{
  ime = i;
  kat_nomer = kat;
  razfasovka = r;
  cena = c;
  kolichestvo = kol;
}

void CLekasrtvo::Add()
{
  cout<<"Въведете име на лекарството: ";
  cin.ignore(cin.rdbuf()->in_avail());//игнорира паразитните Ентъри
  getline(cin,ime);
  cout<<"Въведете каталожен номер: ";
  getline(cin,kat_nomer);
  cout<<"Въведете вид разфасовка(пример: ампули, блистери, дражета, таблетки): ";
  getline(cin,razfasovka);
  cout<<"Въведете цена: ";
  cin>>cena;
  cout<<"Въведете количество: ";
  cin>>kolichestvo;
}

void CLekasrtvo::Print()
{
  cout <<ime<<"\t"<<kat_nomer<<"\t"<<razfasovka<<"\t"<<cena<<"\t"<<kolichestvo<<endl;
}

int CLekasrtvo::operator>(CLekasrtvo l)
{
	return (this->cena > l.cena);
}
