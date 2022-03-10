#include "apteka.h"
#include <iostream>
using namespace std;

// - по въведено наименование на лекарство отпечатва кат. номер на
// най-евтината разфасовка от него (използвайте предеф. операция ‘>’).

int main()
{
  system("chcp 1251");
  CApteka apteka;
  int c;
  do {
    cout <<endl;
    cout << "0. Изход от програмата"<<endl;
    cout << "1. Добавяне на новo лекарство"<<endl;
    cout << "2. Покажи всички лекарства"<<endl;
    cout << "3. Изтриване на лекарство"<<endl;
    cout << "4. Покажи всички лекарства под въведена цена"<<endl;
    cout << "5. Покажи кат. номер на най-евтиното лекарство по въведено име"<<endl;
    cin >> c;
    switch(c)
    {
      case 0: break;
      case 1: apteka.Addlekarstvo(); break;
      case 2: apteka.PrintLekarstva(); break;
      case 3: apteka.DeleteLekarstvo(); break;
      case 4: apteka.PrintLekarstvaPodCena(); break;
      case 5: apteka.PrintNaiEvtinoLekarstvo(); break;
      default: cout << "Грешен избор!"<<endl; break;
    }
  } while(c);

  system("pause");
  return 0;
}

