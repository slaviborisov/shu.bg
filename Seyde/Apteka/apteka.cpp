#include "apteka.h"
#include <iostream>
#include <string>
using namespace std;

CApteka::CApteka()
{
  m = NULL;
  broi_lekarstva = 0;
  cout<< "�������� ��� �� ������: ";
  getline(cin,ime);
}

CApteka::CApteka(string i)
{
  m = NULL;
  broi_lekarstva = 0;
  ime = i;
}


int CApteka::NameriPoKatNomer(string kat_nomer)
{
  for(int i = 0; i < broi_lekarstva; i++)
    if (kat_nomer == m[i].GetKatNomer())
      return i;
  return -1;
}


// int CApteka::IsInUchSustav(long int egn)
// {
//   for(int i = 0; i < broi_lekarstva; i++)
//     if (egn == m[i].EGN()) return i;
//   return -1;
// }

void CApteka::Addlekarstvo()
{
  CLekasrtvo *p = m;
  broi_lekarstva++;
  m = new CLekasrtvo[broi_lekarstva];
  for(int i = 0; i < broi_lekarstva -1; i++)
    m[i] = p[i];

  m[broi_lekarstva -1].Add();
  delete []p;
}

// void CApteka::PrintUchitel()
// {
//   string ime;
//   cout<<"�������� ��� �� ������: ";
//   cin>>ime;

//   int n = IsInUchSustav(ime);
//   if(n != -1)
//     m[n].Print();
// }

void CApteka::PrintLekarstva()
{
  for(int i = 0; i < broi_lekarstva; i++)
    m[i].Print();
}

void CApteka::DeleteLekarstvo()
{
  string kat_nomer;
  cout<<"�������� ��������� ����� �� ���������: ";
  cin.ignore(cin.rdbuf()->in_avail());//�������� ����������� ������
  getline(cin,kat_nomer);

  if(NameriPoKatNomer(kat_nomer) != -1) {
    CLekasrtvo *p = m;
    m = new CLekasrtvo[broi_lekarstva - 1];

    int j, i;
    for(j = 0, i = 0; i < broi_lekarstva; i++)
      if(p[i].GetKatNomer() != kat_nomer)
        m[j++] = p[i];
    broi_lekarstva--;
    delete []p;
  }
  else
    cout<<"���� �������� ��������� �� ���� ��������� �����!";
}

void CApteka::PrintLekarstvaPodCena()
{
  float cena;
  cout<<"�������� ���� �� �� ������� ������ ���������, ����� �� ��� ���: ";
  cin>>cena;

  int namereniLekarstva = 0;
  for(int i = 0; i < broi_lekarstva; i++)
    if(cena > m[i].GetCena()) {
      m[i].Print();
        namereniLekarstva++;
    }
  if(namereniLekarstva == 0)
    cout<<"�� ���� �������� ��������� ��� ���������� ����!"<<endl;
}

void CApteka::PrintNaiEvtinoLekarstvo()
{
  string ime;
  cout<<"�������� ��� �� ���������: ";
  cin.ignore(cin.rdbuf()->in_avail());//�������� ����������� ������
  getline(cin,ime);

  int max_cena = 10000;
  CLekasrtvo lekarstvo(ime, "", "", max_cena, 0);
	for(int i = 0; i < broi_lekarstva; i++) {
    if(m[i].GetIme() == ime)
      if(lekarstvo > m[i] )
        lekarstvo = m[i];
  }

  if(lekarstvo.GetCena() != max_cena)
    cout<<lekarstvo.GetKatNomer();
  else
    cout<<"�� ���� �������� ������ ���������"<<endl;
}

