#include "kat.h"
#include <iostream>
using namespace std;

int main()
{
  system("chcp 1251");
  CKat kat;
  int c;
  do {
    cout<<"0. Изход от програмата \n";
    cout<<"1. Добавете на новa кола \n";
    cout<<"2. Показване на кола по регистрационен номер \n";
    cout<<"3. Показване на всички коли регистрирани в КАТ \n";
    cout<<"4. Изтриване на кола по регистрационен номер \n";
    cout<<"5. Покажи всички коли по име на собсветник \n";
    cout<<"6. Намери най-старата кола по марка и цвят \n";
    cout<<"10. Автоматично генериране на данни \n";
    cin >> c;
    switch(c)
    {
      case 0: break;
      case 1: kat.AddKola(); break;
      case 2: kat.PrintKolaPoRegNomer(); break;
      case 3: kat.PrintVsichkiKoli(); break;
      case 4: kat.DeleteKola(); break;
      case 5: kat.PrintKoliPoSobstvenik(); break;
      case 6: kat.PrintNaiStaraKola(); break;
	    case 10: kat.DummyData(); break;
      default: cout << "Грешен избор!"<<endl; break;
    }
  } while(c);

  system("pause");
  return 0;
}

