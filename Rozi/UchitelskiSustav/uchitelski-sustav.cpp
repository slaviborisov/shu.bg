#include "uchitelski-sustav.h"
#include <iostream>
#include <string>
using namespace std;

CUSustav::CUSustav()
{
  m = NULL;
  broi_zapisi = 0;
  cout<< "Въведете име на училище: ";
  getline(cin,ime_na_uchilishte);
}

CUSustav::CUSustav(string iu)
{
  m = NULL;
  broi_zapisi = 0;
  ime_na_uchilishte = iu;
}


int CUSustav::IsInUchSustav(string ime)
{
  for(int i = 0; i < broi_zapisi; i++)
    if (ime == m[i].Ime()) return i;
  return -1;
}


int CUSustav::IsInUchSustav(long int egn)
{
  for(int i = 0; i < broi_zapisi; i++)
    if (egn == m[i].EGN()) return i;
  return -1;
}

void CUSustav::AddUchitel()
{
  CUchitel *p = m;
  broi_zapisi++;
  m = new CUchitel[broi_zapisi];
  for(int i = 0; i < broi_zapisi -1; i++)
    m[i] = p[i];

  m[broi_zapisi -1].Add();
  delete []p;
}

void CUSustav::PrintUchitel()
{
  string ime;
  cout<<"Въведете име на учител: ";
  cin>>ime;

  int n = IsInUchSustav(ime);
  if(n != -1)
    m[n].Print();
}

void CUSustav::PrintUchSustav()
{
  for(int i = 0; i < broi_zapisi; i++)
    m[i].Print();
}

void CUSustav::DeleteUchitel()
{
  long int egn;
  cout<<"Въведете ЕГН на учител: ";
  cin>>egn;

  if(IsInUchSustav(egn) != -1) {
    CUchitel *p = m;
    m = new CUchitel[broi_zapisi - 1];

    int j, i;
    for(j = 0, i = 0; i < broi_zapisi; i++)
      if(p[i].EGN() != egn)
        m[j++] = p[i];
    broi_zapisi--;
    delete []p;
  }
  else {
    cout<<"Не беше намерен учител по въведеното ЕГН!";
  }
}

void CUSustav::PrintUchiteliPoDisciplina()
{
  string disciplina;
  cout<<"Въведете дисциплина: ";
  cin.ignore();
  getline(cin,disciplina);

  int namereniUchiteli = 0;
  for(int i = 0; i < broi_zapisi; i++)
    if(m[i].Disciplina() == disciplina) {
      m[i].Print();
      namereniUchiteli = 1;
    }
  if(namereniUchiteli == 0) {
    cout<<"Не бяха намерени учители по въведената дисциплина!"<<endl;
  }
}

void CUSustav::PrintDiscplinaPoStaj()
{
  CUchitel uchitel("", 0, 0, "", 0);
	for(int i = 0; i < broi_zapisi; i++) {
		if(m[i] > uchitel) {
      uchitel = m[i];
    }
  }
  if(uchitel.Disciplina() != "")
    uchitel.Print();
  else
    cout<<"Не беше намерен учител!";
}
