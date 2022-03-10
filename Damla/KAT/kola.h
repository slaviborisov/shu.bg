#pragma once
#include <string>
using namespace std;

class CKola
{
  private:
    string marka; //����� �� ������
    string cvqt;//���� �� ������
    string reg_nomer;//�������������� ������ �� ������
    int godina; //������ �� ������������
    string sobstvenik;//���������� �� ������

  public:
    CKola();
    CKola(string, string, string, int, string);
    string GetRegNomer() { return reg_nomer; }
    string GetMarka() { return marka; }
    string GetCvqt() { return cvqt; }
    string GetSobstvenik() { return sobstvenik; }
    int operator<(CKola); //������������� �� �������� <
    void Add(); //�������� �� ��� �����
    void Print(); //����������� �� �����
};
