#pragma once
#include <string>
using namespace std;

class CKlient
{
  private:
    int reg_nomer; //�������������� �����
    string ime; //��� �� �������
    long int egn; //��� �� �������
    int pol; //��� �� �������
    int vuzrast; //������� �� �������
    string profesiq; //�������� �� �������
    int staj; //���� �� �������


  public:
    CKlient();
    CKlient(int, string, long int, int, int, string, int);
    int operator>(CKlient); //������������� �� �������� >
    int RegNomer() { return reg_nomer; }
    long int EGN() { return egn; }
    void Add(); //����� �� �������� �� ��� ����
    void Print(); //����� �� ����������� �� ������������ �� �������
};

