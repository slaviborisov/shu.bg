#include "zoo-park.h"
#include <iostream>
using namespace std;

int main()
{
  system("chcp 1251");
  CZooPark zoo_park;
  int c;
  do {
    cout<<"0. ����� �� ���������� \n";
    cout<<"1. �������� �� ���� ������� \n";
    cout<<"2. ��������� �� ������ ������� � �������������� ������� \n";
    cout<<"3. ��������� �� ������� �� �������������� ����� \n";
    cout<<"4. ��������� �� ������� � ��������� ������� �� ����� ��� \n";
    cout<<"5. ������ ���-����������� ������� �� ������� ��� \n";
    cout<<"10. ��������� ������ ����� \n";
    cin >> c;
    switch(c)
    {
      case 0: break;
      case 1: zoo_park.AddAnimal(); break;
      case 2: zoo_park.PrintAnimals(); break;
      case 3: zoo_park.DeleteAnimal(); break;
      case 4: zoo_park.GetAnimalsByKind(); break;
      case 5: zoo_park.PrintTheOldestAnimal(); break;
      default: cout << "������ �����!"<<endl; break;
    }
  } while(c);

  system("pause");
  return 0;
}
