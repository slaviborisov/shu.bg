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

CKola::CKola(string m, string c, string r, int g, string s)
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
  cout<<"�������� ����� �� ����������: ";
  cin.ignore(cin.rdbuf()->in_avail()); //�������� ����������� ������
  getline(cin,marka);

  cout<<"�������� ���� �� ����������: ";
  getline(cin,cvqt);

  cout<<"�������� �������������� ����� �� ����������: ";
  getline(cin,reg_nomer);

  cout<<"�������� ������ �� ������������: ";
  cin>>godina;

  cout<<"�������� ����������: ";
  cin.ignore(cin.rdbuf()->in_avail()); //�������� ����������� ������
  getline(cin,sobstvenik);
}

void CKola::Print()
{
  cout<<marka<<"\t"<<cvqt<<"\t"<<reg_nomer<<"\t"<<godina<<"\t"<<sobstvenik<<"\t"<<endl;
}
