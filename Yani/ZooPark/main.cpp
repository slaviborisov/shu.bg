#include "zoo-park.h"
#include <iostream>
using namespace std;

int main()
{
  system("chcp 1251");
  CZooPark zoo_park;
  int c;
  do {
    cout<<"0. Изход от програмата \n";
    cout<<"1. Добавете на ново животно \n";
    cout<<"2. Показване на всички животни в зоологическата градина \n";
    cout<<"3. Изтриване на животно по регистрационен номер \n";
    cout<<"4. Показване на имената и възрастта животни от даден вид \n";
    cout<<"5. Покажи най-възрастното животно от неговия вид \n";
    cout<<"10. Динамично добавя данни \n";
    cin >> c;
    switch(c)
    {
      case 0: break;
      case 1: zoo_park.AddAnimal(); break;
      case 2: zoo_park.PrintAnimals(); break;
      case 3: zoo_park.DeleteAnimal(); break;
      case 4: zoo_park.GetAnimalsByKind(); break;
      case 5: zoo_park.PrintTheOldestAnimal(); break;
      case 10: zoo_park.DummyData(); break;
      default: cout << "Грешен избор!"<<endl; break;
    }
  } while(c);

  system("pause");
  return 0;
}
