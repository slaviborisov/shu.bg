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
    int j, i;
    CUchitel *p = m;
    m = new CUchitel[broi_zapisi - 1];

    for(j = 0, i = 0; i < broi_zapisi; i++)
      if (p[i].EGN() != egn)
        m[j++] = p[i];
    broi_zapisi--;
    delete []p;
  }
  else {
    cout<<"Не беше намерен учител";
  }
}

void CUSustav::PrintUchiteliPoDisciplina()
{
  string director;
  bool directorExists;
  cout<<"Въведете режисьор: ";
  cin.ignore();
  getline(cin,director);
  for(int i = 0; i < count_movies; i++)
    if(m[i].GetDirector() == director) {
      m[i].PrintData();
      directorExists = true;
    }
  if(!directorExists) {
    cout<<"Няма въведени филми за режисьор: "<<director<<endl;
  }
}

// void VideoLibrary::PrintLatestAvailableMovie()
// {
//   string director;
//   int media_type;
//   cout<<"Въведете режисьор: ";
//   cin.ignore();
//   getline(cin,director);
//   cout<<"Въведете тип на носител: 0 - Видеокасета, 1 - DVD: ";
//   cin>>media_type;

//   Movie movie(0, media_type, 0, 0, 0, "", director);
// 	for(int i = 0; i < count_movies; i++) {
// 		if(m[i] > movie) {
//       movie = m[i];
//     }
//   }
//   if(movie.GetID() > 0) movie.PrintData();
//   else cout<<"Няма намерен резултат!";
// }

void CUSustav::DummyData()
{
  m = new CUchitel[3];
  m[0] = CUchitel("Slavi", 8504276540, 37, "KI", 12);
  m[1] = CUchitel("Mimi", 123456, 30, "MIO", 8);
  m[2] = CUchitel("Mladen", 87324234, 39, "MT", 10);
  m[3] = CUchitel("Viktor", 234234, 40, "FI", 16);
  broi_zapisi = 4;
}
