#pragma once
#include "animal.h"
#include <string>
using namespace std;

class CZooPark {
  private:
    int count_animals; // ���� ������� � �������������� �������
    string name; // ��� �� �� ������������ ��������
    CAnimal *m; // ��������

  public:
    CZooPark();
    CZooPark(string);
    int FindAnimalByRegNumber(string); // ������ ������� �� ���. �����
    void AddAnimal(); // ������ ���� �������
    void PrintAnimals(); // ������� ������ �������
    void DeleteAnimal(); // ������� ������� �� ���. �����
    void GetAnimalsByKind(); // ������� ������� � ��������� ��������� �� ����� ���
    void PrintTheOldestAnimal(); // ������� ���-������� ������� �� ����� ���
    ~CZooPark() { delete []m; } //����������
};

