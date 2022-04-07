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
    // cout << "3. Намери ученик по клас, паралелка и номер в класа"<<endl;
    // cout << "4. Покажи имената на всички ученици, чиято възраст е под зададената"<<endl;
    // cout << "5. Покажи всички ученици, на които теглото е по-малко от зададеното"<<endl;
    // cout << "6. Покажи името на най-тежкия ученик от зададен клас"<<endl;
    cout << "10. Dummy data"<<endl;
    cin >> c;
    switch(c)
    {
      case 0: break;
      case 1: agency.AddPerson(); break;
      case 2: agency.PrintAllMembers(); break;
      case 3: agency.DeletePerson(); break;
      // case 4: school.StudentsLessThanAge(); break;
      // case 5: school.StudentsLessThanWeight(); break;
      // case 6: school.TheHeaviestStudent(); break;
	    case 10: agency.DummyData(); break;
      default: cout << "Грешен избор!"<<endl; break;
    }
  } while(c);

  system("pause");
  return 0;
}

