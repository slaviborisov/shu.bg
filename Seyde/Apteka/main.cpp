#include "apteka.h"
#include <iostream>
using namespace std;

// - �� �������� ������������ �� ��������� ��������� ���. ����� ��
// ���-�������� ���������� �� ���� (����������� ������. �������� �>�).

int main()
{
  system("chcp 1251");
  CApteka apteka;
  int c;
  do {
    cout <<endl;
    cout << "0. ����� �� ����������"<<endl;
    cout << "1. �������� �� ���o ���������"<<endl;
    cout << "2. ������ ������ ���������"<<endl;
    cout << "3. ��������� �� ���������"<<endl;
    cout << "4. ������ ������ ��������� ��� �������� ����"<<endl;
    cout << "5. ������ ���. ����� �� ���-�������� ��������� �� �������� ���"<<endl;
    cin >> c;
    switch(c)
    {
      case 0: break;
      case 1: apteka.Addlekarstvo(); break;
      case 2: apteka.PrintLekarstva(); break;
      case 3: apteka.DeleteLekarstvo(); break;
      case 4: apteka.PrintLekarstvaPodCena(); break;
      case 5: apteka.PrintNaiEvtinoLekarstvo(); break;
      default: cout << "������ �����!"<<endl; break;
    }
  } while(c);

  system("pause");
  return 0;
}

