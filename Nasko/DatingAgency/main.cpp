#include "agency.h"
#include <iostream>
using namespace std;

int main()
{
  system("chcp 1251");
  CAgency agency;
  int c;
  do {
    cout <<endl;
    cout << "0. Изход от програмата"<<endl;
    cout << "1. Добавете на нов клиент"<<endl;
    cout << "2. Показване на всички клиенти"<<endl;
    cout << "3. Изтриване на клиент"<<endl;
    cout << "4. Показване данните на клиента по въведено ЕГН"<<endl;
    cout << "5. Показване на всички клиент, които практикуват зададена професия"<<endl;
    cout << "6. Показваане на най-младия партньор със сходни качества"<<endl;
    cin >> c;
    switch(c)
    {
      case 0: break;
      case 1: agency.AddPerson(); break;
      case 2: agency.PrintAllMembers(); break;
      case 3: agency.DeletePerson(); break;
      case 4: agency.PrintByPersonalID(); break;
      case 5: agency.PrintByProfession(); break;
      case 6: agency.PrintYoungestPerson(); break;
      default: cout << "Грешен избор!"<<endl; break;
    }
  } while(c);

  system("pause");
  return 0;
}

