#include "zoo-park.h"
#include <iostream>
#include <string>
using namespace std;

CZooPark::CZooPark()
{
	m = NULL;
  count_animals = 0;
  cout<< "Въведете име на КАТ: ";
  getline(cin,name);
}

CZooPark::CZooPark(string a_name)
{
	m = NULL;
  count_animals = 0;
  name = a_name;
}

void CZooPark::AddAnimal()
{
  CAnimal *p = m;
  m = new CAnimal[count_animals + 1];
  for(int i = 0; i < count_animals; i++)
    m[i] = p[i];
  m[count_animals].Add();
  count_animals++;
  delete []p;
}

void CZooPark::PrintAnimals()
{
  for(int i = 0; i < count_animals; i++)
    m[i].Print();
}

// int CZooPark::NameriKolaPoRegNomer(string reg_nomer)
// {
//   for(int i = 0; i < count_animals; i++)
//     if (reg_nomer == m[i].GetRegNomer()) return i;
//   return -1;
// }

// void CZooPark::PrintKolaPoRegNomer()
// {
//   string reg_number;
//   cout<<"Въведете регистрационен номер на колата: ";
//   cin>>reg_number;

//   int n = NameriKolaPoRegNomer(reg_number);
//   if(n != -1)
//     m[n].Print();
//   else cout<<"Няма въведена кола с този рег. номер! \n";
// }



// void CZooPark::DeleteKola()
// {
//   string reg_number;
//   cout<<"Въведете регистрационен номер на колата: ";
//   cin>>reg_number;

//   if(NameriKolaPoRegNomer(reg_number) != -1) {
//     CAnimal *p = m;
//     m = new CAnimal[count_animals - 1];

//     int j, i;
//     for(j = 0, i = 0; i < count_animals; i++)
//       if(p[i].GetRegNomer() != reg_number)
//         m[j++] = p[i];
//     count_animals--;
//     delete []p;
//   }
//   else
//     cout<<"Няма въведена кола с този рег. номер! \n";
// }

// void CZooPark::PrintKoliPoSobstvenik()
// {
//   string sobstvenik;
//   cout<<"Въведете име на собственик: ";
//   cin.ignore(cin.rdbuf()->in_avail()); //Игнорира паразитните Ентъри
//   getline(cin,sobstvenik);

//   bool namereni_koli = false;
//   for(int i = 0; i < count_animals; i++)
//     if(m[i].GetSobstvenik() == sobstvenik)
//       m[i].Print();
//       namereni_koli = true;

//   if(namereni_koli == false)
//     cout<<"Няма намерени коли на този собственик \n";
// }


// void CZooPark::PrintNaiStaraKola()
// {
//   string marka;
//   cout<<"Въведете марка на колата: ";
//   cin.ignore(cin.rdbuf()->in_avail()); //Игнорира паразитните Ентъри
//   getline(cin,marka);

//   string cvqt;
//   cout<<"Въведете цвят на колата: ";
//   getline(cin,cvqt);

//   CAnimal kola(marka, cvqt,  "", 2023, "");
//   int nai_stara_kola = 0;
//   for(int i = 0; i < count_animals; i++)
//     if(m[i].GetMarka() == marka && m[i].GetCvqt() == cvqt)
//       if(m[i] < kola)
//         kola = m[i];
//   if(kola.GetRegNomer() != "")
//     kola.Print();
//   else
//     cout<<"Не беше намерена кола по-стара от 2023год. \n";
// }

void CZooPark::DummyData()
{
  m = new CAnimal[6];
  m[0] = CAnimal("123456", "Слон",      82, 0, 0, 60.5);
  m[1] = CAnimal("786234", "Носорог",   33, 1, 0, 44.7);
  m[2] = CAnimal("098023", "Хипопотам", 14, 1, 1, 30.1);
  m[3] = CAnimal("234845", "Лъв",       6,  1, 1, 15);
  m[4] = CAnimal("675234", "Тигър",     6,  0, 1, 20);
  m[5] = CAnimal("123456", "Сърна",     1,  0, 0, 1);
  count_animals = 6;
}

