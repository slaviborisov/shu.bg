#pragma once
#include "klient.h"
#include <string>
using namespace std;

class CBuro {
  private:
    int broi_klienti;
    string ime;
    CKlient *m;

  public:
    CBuro();
    CBuro(string);
    void AddKlient();
    void PrintKlient();
    void PrintiVsichkiKlienti();
    int ProverkaPoRegNomer(int); //����� �� �������� �� ����������� ������ �� ���. �����
    int ProverkaPoEGN(long int); //����� �� �������� �� ����������� ������ �� ���
    void DeleteKlient(); //����� �� ��������� �� ������ �� �������� ���
    void PrintKlientiPoStaj(); //������� ������ �������, ����� ��������� �� ��������� ����
    ~CBuro() { delete []m; } //����������
};
