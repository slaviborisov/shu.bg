#pragma once
#include "kola.h"
#include <string>
using namespace std;

class CKat {
  private:
    int broi_koli; //��� ���� ������������ ����������
    string name;// ��� �� ���
    CKola *m;// ��������

  public:
    CKat();
    CKat(string);
    void AddKola(); //������ ���a ����
    int NameriKolaPoRegNomer(string); //������ ���� �� ���. �����
    void PrintKolaPoRegNomer(); //������� ���� �� ���. �����
    void PrintVsichkiKoli(); //������� ������ ����
    void DeleteKola(); //������� ���� �� �������������� �����
    void PrintKoliPoSobstvenik();
    void PrintNaiStaraKola();
    void DummyData();
    ~CKat() { delete []m; } //����������
};
