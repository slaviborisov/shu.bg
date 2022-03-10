#pragma once
#include "lekarstvo.h"
#include <string>
using namespace std;

class CApteka {
  private:
    string ime;
    int broi_lekarstva;
    CLekasrtvo *m;

  public:
    CApteka();
    CApteka(string);
    int NameriPoKatNomer(string); // ����� �� �������� �� ������� ��������� �� ���. �����
    void Addlekarstvo(); // ����� �� �������� �� ���� ��������� � ��������
    void PrintLekarstva(); // ����� �� ��������� �� ������ ��������� � ��������
    void DeleteLekarstvo(); // ����� �� ��������� �� ��������� �� ���. �����
    void PrintLekarstvaPodCena(); // ������ ������ ��������� ��� �������� ����
    void PrintNaiEvtinoLekarstvo(); // ������� ���. ����� �� ���-�������� ��������� �� �������� ���
    ~CApteka() { delete []m; } // ����������: ������� ��������� ���������� �����
};
