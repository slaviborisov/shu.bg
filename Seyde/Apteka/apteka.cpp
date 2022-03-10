#include "apteka.h"
#include <iostream>
#include <string>
using namespace std;

CApteka::CApteka()
{
  m = NULL;
  broi_lekarstva = 0;
  cout<< "Въведете име на Аптека: ";
  getline(cin,ime);
}

CApteka::CApteka(string i)
{
  m = NULL;
  broi_lekarstva = 0;
  ime = i;
}


// int CApteka::IsInUchSustav(string ime)
// {
//   for(int i = 0; i < broi_lekarstva; i++)
//     if (ime == m[i].Ime()) return i;
//   return -1;
// }


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
//   cout<<"Въведете име на учител: ";
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

// void CApteka::DeleteUchitel()
// {
//   long int egn;
//   cout<<"Въведете ЕГН на учител: ";
//   cin>>egn;

//   if(IsInUchSustav(egn) != -1) {
//     CLekasrtvo *p = m;
//     m = new CLekasrtvo[broi_lekarstva - 1];

//     int j, i;
//     for(j = 0, i = 0; i < broi_lekarstva; i++)
//       if(p[i].EGN() != egn)
//         m[j++] = p[i];
//     broi_lekarstva--;
//     delete []p;
//   }
//   else {
//     cout<<"Не беше намерен учител по въведеното ЕГН!";
//   }
// }

// void CApteka::PrintUchiteliPoDisciplina()
// {
//   string disciplina;
//   cout<<"Въведете дисциплина: ";
//   cin.ignore();
//   getline(cin,disciplina);

//   int namereniUchiteli = 0;
//   for(int i = 0; i < broi_lekarstva; i++)
//     if(m[i].Disciplina() == disciplina) {
//       m[i].Print();
//       namereniUchiteli = 1;
//     }
//   if(namereniUchiteli == 0) {
//     cout<<"Не бяха намерени учители по въведената дисциплина!"<<endl;
//   }
// }

// void CApteka::PrintDiscplinaPoStaj()
// {
//   CLekasrtvo uchitel("", 0, 0, "", 0);
// 	for(int i = 0; i < broi_lekarstva; i++) {
// 		if(m[i] > uchitel) {
//       uchitel = m[i];
//     }
//   }
//   if(uchitel.Disciplina() != "")
//     uchitel.Print();
//   else
//     cout<<"Не беше намерен учител!";
// }


void CApteka::DummyData()
{
  m = new CLekasrtvo[6];
  m[0] = CLekasrtvo("Беналгин",         "123саасд3", "Блистери",  1.2, 2);
  m[1] = CLekasrtvo("Спазмалгон",       "672345asd", "Таблетки",  3.2, 10);
  m[2] = CLekasrtvo("Иберогаст",        "23423са24", "Ампулички", 0.5, 10);
  m[3] = CLekasrtvo("Салофалк",         "090909808", "Свещички",  12.2, 6);
  m[4] = CLekasrtvo("Авирон рапид",     "673457634", "Таблетки",  5.5,  6);
  m[5] = CLekasrtvo("Ангал спрей",      "23478асд3", "Ампулички", 23,  16);
  broi_lekarstva = 6;
}
