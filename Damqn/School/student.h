#pragma once
#include <string>
using namespace std;

class CStudent
{
  private:
  string name; // ���
  int grade; // ����
  string section; // ����������
  int number; // ����� � �����
  int age; // �������
  int height; // ����
  int weight; // �����

  public:
    CStudent();
    CStudent(string, int, string, int, int, int, int);
    string GetName() { return name; };
    int GetGrade() { return grade; }
    string GetSection() { return section; }
    int GetNumber() { return number; }
    int GetAge() { return age; }
    int GetWeight() { return weight; }
    int operator>(CStudent); // ������������� �� �������� >
    void Add(); // M���� �� �������� �� ��� ������
    void Print(); // M���� �� ����������� �� ������
};
