#pragma once
#include <string>
using namespace std;

class CAnimal
{
  private:
    string reg_number; // �������������� ����� �� ���������
    string name; // ��� �� ���������
    int age; // �������� �� ���������
    int sex; // ��� �� ���������
    string kind; // ��� �������
    int food_type; // ��� �����
    float food_amount; // ���������� �����

  public:
    CAnimal();
    CAnimal(string, string, int, int, string, int, float);
    int operator>(CAnimal); //������������� �� �������� <
    void Add(); //�������� �� ���� �������
    void Print(); //����������� �� �������
    string GetRegNomer() { return reg_number; }
    string GetName() { return name; }
    int GetAge() { return age; }
    int GetSex() { return sex; }
    string GetKind() { return kind; }
    int GetFoodType() { return food_type; }
    int GetFoddAmount() {return food_amount; }
};
