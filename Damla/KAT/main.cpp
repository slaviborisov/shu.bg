#include "kat.h"
#include <iostream>
using namespace std;

int main()
{
  system("chcp 1251");
  CKat kat;
  int c;
  do {
    cout<<"0. ����� �� ���������� \n";
    cout<<"1. �������� �� ���a ���� \n";
    cout<<"2. ��������� �� ���� �� �������������� ����� \n";
    cout<<"3. ��������� �� ������ ���� ������������ � ��� \n";
    cout<<"4. ��������� �� ���� �� �������������� ����� \n";
    cout<<"5. ������ ������ ���� �� ��� �� ���������� \n";
    cout<<"6. ������ ���-������� ���� �� ����� � ���� \n";
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
      default: cout << "������ �����!"<<endl; break;
    }
  } while(c);

  system("pause");
  return 0;
}
