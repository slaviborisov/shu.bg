#include "klient.h"
#include <iostream>
#include <string>
using namespace std;

string media_types[2] = { "�����������", "DVD"};
string statuses[2]    = { "��������", "�����" };

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
  cout<<"�������� ���. �����: ";
  cin>>reg_nomer;

  cout<<"�������� ���: ";
  cin.ignore(cin.rdbuf()->in_avail() + 1);
  getline(cin,ime);

  cout<<"�������� ���: ";
  cin>>egn;

  cout<<"�������� ���: ";
  cin>>pol;

  cout<<"�������� �������: ";
  cin>>vuzrast;

  cout<<"�������� ��������: ";
  cin.ignore(cin.rdbuf()->in_avail() + 1);
  getline(cin,profesiq);

  cout<<"�������� ������ ����: ";
  cin>>staj;
}

void CKlient::Print()
{
  cout <<reg_nomer<<"\t"<<ime<<"\t"<<egn<<"\t";
  cout<<(pol == 0 ? "���" : "����")<<"\t";
  cout<<"\t"<<vuzrast<<"\t"<<profesiq<<"\t"<<staj<<endl;
}
