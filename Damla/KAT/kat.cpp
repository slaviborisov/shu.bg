#include "kat.h"
#include <iostream>
#include <string>
using namespace std;

CKat::CKat()
{
	m = NULL;
  broi_koli = 0;
  cout<< "�������� ��� �� ���: ";
  getline(cin,name);
}

CKat::CKat(string k_name)
{
	m = NULL;
  broi_koli = 0;
  name = k_name;
}

void CKat::AddKola()
{
  CKola *p = m;
  m = new CKola[broi_koli + 1];
  for(int i = 0; i < broi_koli; i++)
    m[i] = p[i];
  m[broi_koli].Add();
  broi_koli++;
  delete []p;
}

int CKat::NameriKolaPoRegNomer(string reg_nomer)
{
  for(int i = 0; i < broi_koli; i++)
    if (reg_nomer == m[i].GetRegNomer()) return i;
  return -1;
}

void CKat::PrintKolaPoRegNomer()
{
  string reg_number;
  cout<<"�������� �������������� ����� �� ������: ";
  cin>>reg_number;

  int n = NameriKolaPoRegNomer(reg_number);
  if(n != -1)
    m[n].Print();
  else cout<<"���� �������� ���� � ���� ���. �����! \n";
}

void CKat::PrintVsichkiKoli()
{
  for(int i = 0; i < broi_koli; i++)
    m[i].Print();
}

void CKat::DeleteKola()
{
  string reg_number;
  cout<<"�������� �������������� ����� �� ������: ";
  cin>>reg_number;

  if(NameriKolaPoRegNomer(reg_number) != -1) {
    CKola *p = m;
    m = new CKola[broi_koli - 1];

    int j, i;
    for(j = 0, i = 0; i < broi_koli; i++)
      if(p[i].GetRegNomer() != reg_number)
        m[j++] = p[i];
    broi_koli--;
    delete []p;
  }
  else
    cout<<"���� �������� ���� � ���� ���. �����! \n";
}

void CKat::PrintKoliPoSobstvenik()
{
  string sobstvenik;
  cout<<"�������� ��� �� ����������: ";
  cin.ignore(cin.rdbuf()->in_avail()); //�������� ����������� ������
  getline(cin,sobstvenik);

  bool namereni_koli = false;
  for(int i = 0; i < broi_koli; i++)
    if(m[i].GetSobstvenik() == sobstvenik)
      m[i].Print();
      namereni_koli = true;

  if(namereni_koli == false)
    cout<<"���� �������� ���� �� ���� ���������� \n";
}


void CKat::PrintNaiStaraKola()
{
  string marka;
  cout<<"�������� ����� �� ������: ";
  cin.ignore(cin.rdbuf()->in_avail()); //�������� ����������� ������
  getline(cin,marka);

  string cvqt;
  cout<<"�������� ���� �� ������: ";
  getline(cin,cvqt);

  CKola kola(marka, cvqt,  "", 2023, "");
  int nai_stara_kola = 0;
  for(int i = 0; i < broi_koli; i++)
    if(m[i].GetMarka() == marka && m[i].GetCvqt() == cvqt)
      if(m[i] < kola)
        kola = m[i];
  if(kola.GetRegNomer() != "")
    kola.Print();
  else
    cout<<"�� ���� �������� ���� ��-����� �� 2023���. \n";
}
