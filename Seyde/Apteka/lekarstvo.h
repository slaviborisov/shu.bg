#pragma once
#include <string>
using namespace std;

class CLekasrtvo
{
  private:
  string ime; // ��� �� ���������
  string kat_nomer; // ��������� ����� �� ���������
  string razfasovka; // ��� ���������� (������, ��������, �������, ��������, ������... )
  float cena; // ���������� �� ����� ���������
  int kolichestvo; // ������ ����

  public:
    CLekasrtvo();
    CLekasrtvo(string, string, string, float, int);
    int operator>(CLekasrtvo); // ������������� �� ���������� >
    void Add(); // ����� �� �������� �� ���� ���������
    void Print();  // ����� �� ����������� �� ������������ �� ���������
    string GetIme() { return ime; } //����� ����� �� �����������
    string GetKatNomer() { return kat_nomer; } // ����� ���������� ����� �� �����������
    float GetCena() { return cena; } // ���� ������ �� �����������
};
