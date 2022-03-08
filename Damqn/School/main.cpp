#include "school.h"
#include <iostream>
using namespace std;

int main()
{
  // system("chcp 1251");
  CSchool school;
  int c;
  do {
    cout <<endl;
    cout << "0. Изход от програмата"<<endl;
    cout << "1. Добавете на нов ученик"<<endl;
    cout << "2. Показване на всички ученици"<<endl;
    cout << "3. Намери ученик по клас, паралелка и номер в класа"<<endl;
    cout << "4. Покажи имената на всички ученици, чиято възраст е под зададената"<<endl;
    cout << "5. Покажи всички ученици, на които теглото е по-малко от зададеното"<<endl;
    cout << "6. Покажи името на най-тежкия ученик от зададен клас"<<endl;
    cout << "10. Dummy data"<<endl;
    cin >> c;
    switch(c)
    {
      case 0: break;
      case 1: school.AddStudent(); break;
      case 2: school.PrintAllStudents(); break;
      case 3: school.PrintStudentByParams(); break;
      case 4: school.StudentsLessThanAge(); break;
      case 5: school.StudentsLessThanWeight(); break;
      case 6: school.TheHeaviestStudent(); break;
	    case 10: school.DummyData(); break;
      default: cout << "Грешен избор!"<<endl; break;
    }
  } while(c);

  // system("pause");
  return 0;
}

