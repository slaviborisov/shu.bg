#include "uchitelski-sustav.h"
#include <iostream>
using namespace std;

int main()
{
  // system("chcp 1251");
  CUSustav uchSustav;
  int c;
  do {
    cout <<endl;
    cout << "0. Изход от програмата"<<endl;
    cout << "1. Добавяне на нов учител"<<endl;
    cout << "2. Покажи учител"<<endl;
    cout << "3. Покажи учителския състав"<<endl;
    cout << "4. Изтриване на учител"<<endl;
    cout << "5. Показване всички учители по зададена дисциплина"<<endl;
    cout << "6. Показване на водената дисциплина на учителя с най-голям стаж"<<endl;
    cout << "7. Add dummy data \n";
    cin >> c;
    switch(c)
    {
      case 0: break;
      case 1: uchSustav.AddUchitel(); break;
      case 2: uchSustav.PrintUchitel(); break;
      case 3: uchSustav.PrintUchSustav(); break;
      case 4: uchSustav.DeleteUchitel(); break;
      case 5: uchSustav.PrintUchiteliPoDisciplina(); break;
      case 6: uchSustav.PrintDiscplinaPoStaj(); break;
      default: cout << "Грешен избор!"<<endl; break;
    }
  } while(c);

  // system("pause");
  return 0;
}

