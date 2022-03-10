#include "apteka.h"
#include <iostream>
using namespace std;

int main()
{
  system("chcp 1251");
  CApteka apteka;
  int c;
  do {
    cout <<endl;
    cout << "0. Изход от програмата"<<endl;
    cout << "1. Добавяне на новo лекарство"<<endl;
    // cout << "2. Покажи учител"<<endl;
    cout << "3. Покажи всички лекарства"<<endl;
    // cout << "4. Изтриване на учител"<<endl;
    // cout << "5. Показване всички учители по зададена дисциплина"<<endl;
    // cout << "6. Показване на водената дисциплина на учителя с най-голям стаж"<<endl;
    cout<<"10. Автоматично генериране на данни \n";
    cin >> c;
    switch(c)
    {
      case 0: break;
      case 1: apteka.Addlekarstvo(); break;
      // case 2: apteka.PrintUchitel(); break;
        case 3: apteka.PrintLekarstva(); break;
      // case 4: apteka.DeleteUchitel(); break;
      // case 5: apteka.PrintUchiteliPoDisciplina(); break;
      // case 6: apteka.PrintDiscplinaPoStaj(); break;
	    case 10: apteka.DummyData(); break;
      default: cout << "Грешен избор!"<<endl; break;
    }
  } while(c);

  system("pause");
  return 0;
}

