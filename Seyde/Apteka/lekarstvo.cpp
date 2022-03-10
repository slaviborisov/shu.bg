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
  cout<<"�������� ��� �� �����������: ";
  cin.ignore(cin.rdbuf()->in_avail());//�������� ����������� ������
  getline(cin,ime);
  cout<<"�������� ��������� �����: ";
  getline(cin,kat_nomer);
  cout<<"�������� ��� ����������(������: ������, ��������, �������, ��������): ";
  getline(cin,razfasovka);
  cout<<"�������� ����: ";
  cin>>cena;
  cout<<"�������� ����������: ";
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
