#include "bolnica.h"
#include <iostream>
using namespace std;

int main()
{
  system("chcp 1251");
  CBolnica bolnica;
  int c;
  do {
    cout<<"0. Изход от програмата \n";
    cout<<"1. Добавете на нов лекар \n";
    cout<<"2. Показване на всички лекари в болницата \n";
    cout<<"3. Показване на лекар по идентификационен номер \n";
    cout<<"4. Изтриване на лекар по идентификационен номер \n";
    cout<<"5. Покажи лекари над определена възраст \n";
    cout<<"6. Намери най-младия Педиатър \n";
    cout<<"10. Автоматично генериране на данни \n";
    cin >> c;
    switch(c)
    {
      case 0: break;
      case 1: bolnica.AddLekar(); break;
      case 2: bolnica.PrintLekari(); break;
      case 3: bolnica.PrintLekarPoNomer(); break;
      case 4: bolnica.DeleteLekar(); break;
      case 5: bolnica.PrintLekariNadVuzrast(); break;
      case 6: bolnica.PrintNaiMladPediatur(); break;
	    case 10: bolnica.DummyData(); break;
      default: cout << "Грешен избор!"<<endl; break;
    }
  } while(c);

  system("pause");
  return 0;
}

