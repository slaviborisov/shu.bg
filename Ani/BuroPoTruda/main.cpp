#include "buro.h"
#include <iostream>
using namespace std;

int main()
{
  // system("chcp 1251");
  CBuro buro;
  int c;
  do {
    cout <<endl;
    cout << "0. Изход от програмата"<<endl;
    cout << "1. Добавяне на нов клиент"<<endl;
    cout << "2. Покажи клиент"<<endl;
    cout << "3. Покажи всички клиенти регистриани в бюрото"<<endl;
    cout << "4. Изтриване на клиент"<<endl;
    cout << "5. Показване всички клиенти, които имат по-голям от зададения стаж"<<endl;
    cout << "10. Add dummy data \n";
    cin >> c;
    switch(c)
    {
      case 0: break;
      case 1: buro.AddKlient(); break;
      case 2: buro.PrintKlient(); break;
      case 3: buro.PrintiVsichkiKlienti(); break;
      case 4: buro.DeleteKlient(); break;
      case 5: buro.PrintKlientiPoStaj(); break;
      case 10: buro.DummyData(); break;
      default: cout << "Грешен избор!"<<endl; break;
    }
  } while(c);

  // system("pause");
  return 0;
}

