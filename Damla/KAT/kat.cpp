#include "kat.h"
#include <iostream>
#include <string>
using namespace std;

CKat::CKat()
{
	m = NULL;
  broi_koli = 0;
  cout<< "Въведете име на КАТ: ";
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
  cout<<"Въведете регистрационен номер на колата: ";
  cin>>reg_number;

  int n = NameriKolaPoRegNomer(reg_number);
  if(n != -1)
    m[n].Print();
  else cout<<"Няма въведена кола с този рег. номер! \n";
}

void CKat::PrintVsichkiKoli()
{
  for(int i = 0; i < broi_koli; i++)
    m[i].Print();
}

void CKat::DeleteKola()
{
  string reg_number;
  cout<<"Въведете регистрационен номер на колата: ";
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
    cout<<"Няма въведена кола с този рег. номер! \n";
}

void CKat::PrintKoliPoSobstvenik()
{
  string sobstvenik;
  cout<<"Въведете име на собственик: ";
  cin.ignore(cin.rdbuf()->in_avail() + 1); //Игнорира паразитните Ентъри
  getline(cin,sobstvenik);

  bool namereni_koli = false;
  for(int i = 0; i < broi_koli; i++)
    if(m[i].GetSobstvenik() == sobstvenik)
      m[i].Print();
      namereni_koli = true;

  if(namereni_koli == false)
    cout<<"Няма намерени коли на този собственик \n";
}


void CKat::DummyData()
{
  m = new CKola[8];
  m[0] = CKola("Mazda", "черен",  "СВ2157РВ", 2017, "Слави Борисов");
  m[1] = CKola("КИА",   "червен", "983А45АА", 1991, "Мими");
  m[2] = CKola("Nisan", "черен",  "АСД3243С", 1999, "Жоро");
  m[3] = CKola("BMW",   "черен",  "КЙСФСДФ4", 2022, "Пешо");
  m[4] = CKola("Subaru", "черен", "34АДДА34", 2015, "Слави Борисов");
  m[5] = CKola("Honda",  "черен", "ЙНАСД4АС", 2022, "Гошо");
  broi_koli = 8;
}
