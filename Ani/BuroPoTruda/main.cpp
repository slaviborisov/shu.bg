#include "buro.h"
#include <iostream>
using namespace std;

int main()
{
  system("chcp 1251");
  CBuro buro;
  int c;
  do {
    cout <<endl;
    cout << "0. ����� �� ����������"<<endl;
    cout << "1. �������� �� ��� ������"<<endl;
    cout << "2. ������ ������"<<endl;
    cout << "3. ������ ������ ������� ����������� � ������"<<endl;
    cout << "4. ��������� �� ������"<<endl;
    cout << "5. ��������� ������ �������, ����� ���� ��-����� �� ��������� ����"<<endl;
    cin >> c;
    switch(c)
    {
      case 0: break;
      case 1: buro.AddKlient(); break;
      case 2: buro.PrintKlient(); break;
      case 3: buro.PrintiVsichkiKlienti(); break;
      case 4: buro.DeleteKlient(); break;
      case 5: buro.PrintKlientiPoStaj(); break;
      default: cout << "������ �����!"<<endl; break;
    }
  } while(c);

  system("pause");
  return 0;
}

