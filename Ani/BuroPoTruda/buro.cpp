#include "buro.h"
#include <iostream>
#include <string>
using namespace std;

CBuro::CBuro()
{
	m = NULL;
  broi_klienti = 0;
  cout<< "�������� ��� �� ������ �� ������� �������: ";
  getline(cin,ime);
}

CBuro::CBuro(string i)
{
	m = NULL;
  broi_klienti = 0;
  ime = i;
}

int CBuro::ProverkaPoRegNomer(int regNumber)
{
  for(int i = 0; i < broi_klienti; i++)
    if (regNumber == m[i].RegNomer()) return i;
  return -1;
}

int CBuro::ProverkaPoEGN(long int egn)
{
  for(int i = 0; i < broi_klienti; i++)
    if (egn == m[i].EGN()) return i;
  return -1;
}

void CBuro::AddKlient()
{
  CKlient *p = m;
  broi_klienti++;
  m = new CKlient[broi_klienti];
  for(int i = 0; i < broi_klienti -1; i++)
    m[i] = p[i];

  m[broi_klienti -1].Add();
  delete []p;
}

void CBuro::PrintKlient()
{
  int reg_nomer;
  cout<<"�������� ���. ����� : ";
  cin>>reg_nomer;

  int klient = ProverkaPoRegNomer(reg_nomer);
  if(klient != -1)
    m[klient].Print();
}

void CBuro::PrintiVsichkiKlienti()
{
  for(int i = 0; i < broi_klienti; i++)
    m[i].Print();
}

void CBuro::DeleteKlient()
{
  long int egn;
  cout<<"�������� ��� �� �������: ";
  cin>>egn;

  if(ProverkaPoEGN(egn) != -1) {
    CKlient *p = m;
    m = new CKlient[broi_klienti - 1];

    int j, i;
    for(j = 0, i = 0; i < broi_klienti; i++)
      if(p[i].EGN() != egn)
        m[j++] = p[i];
    broi_klienti--;
    delete []p;
  }
  else {
    cout<<"�� ���� ������� ������ �� ���������� ���!";
  }
}

void CBuro::PrintKlientiPoStaj()
{
  int klienti = 0;
  int staj = 0;
  cout<<"�������� ����: ";
  cin>>staj;

  CKlient klient(0, "", 0, 0, 0, "", staj);
  for(int i = 0; i < broi_klienti; i++)
    if(m[i] > klient) {
      m[i].Print();
      klienti++;
    }
  if(klienti == 0) {
    cout<<"���� ������� ��� ��������� ����"<<endl;
  }
}
