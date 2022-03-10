#include "school.h"
#include <iostream>
#include <string>
using namespace std;

CSchool::CSchool()
{
	m = NULL;
  total_students = 0;
  cout<< "�������� ��� �� �������: ";
  getline(cin,school_name);
}

CSchool::CSchool(string s_name)
{
	m = NULL;
  total_students = 0;
  school_name = s_name;
}

void CSchool::AddStudent()
{
  CStudent *p = m;
  m = new CStudent[total_students + 1];
  for(int i = 0; i < total_students; i++)
    m[i] = p[i];
  m[total_students].Add();
  total_students++;
  delete []p;
}

void CSchool::PrintAllStudents()
{
  for(int i = 0; i < total_students; i++)
    m[i].Print();
}

void CSchool::PrintStudentByParams()
{
  int grade;
  cout<<"�������� ���� �� �������: ";
  cin>>grade;

  string section;
  cout<<"�������� ��������� �� �������: ";
  cin.ignore(cin.rdbuf()->in_avail()); //�������� ����������� ������
  getline(cin,section);

  int number;
  cout<<"�������� ����� �� �������: ";
  cin>>number;

  bool hasStudent = false;
  for(int i = 0; i < total_students; i++)
    if(m[i].GetGrade() == grade && m[i].GetSection() == section && m[i].GetNumber() == number) {
      m[i].Print();
      hasStudent = true;
    }

  if(hasStudent == false) {
    cout<<"�� ��������� ������!"<<endl;
  }
}

void CSchool::StudentsLessThanAge()
{
  int age;
  cout<<"�������� ������� �� �������: ";
  cin>>age;
  for(int i = 0; i < total_students; i++)
    if(age > m[i].GetAge() )
      cout<<m[i].GetName()<<" | ";
}

void CSchool::StudentsLessThanWeight()
{
  int weight;
  cout<<"�������� �����: ";
  cin>>weight;
  for(int i = 0; i < total_students; i++)
    if(weight > m[i].GetWeight() )
      m[i].Print();
}

void CSchool::TheHeaviestStudent()
{
  int grade;
  cout<<"�������� ����: ";
  cin>>grade;
  CStudent student("", 0, "", 0, 0, 0, grade);
  for(int i = 0; i < total_students; i++)
    if(grade == m[i].GetGrade() )
      if(m[i] > student)
        student = m[i];
  cout<<"���-������� ������ �: "<<student.GetName()<<endl;
}

void CSchool::DummyData()
{
  m = new CStudent[6];
  m[0] = CStudent("������ 1", 4, "�", 1, 12, 130, 35);
  m[1] = CStudent("������ 2", 4, "�", 2, 12, 145, 45);
  m[2] = CStudent("������ 3", 4, "�", 5, 13, 150, 40);
  m[3] = CStudent("������ 1", 7, "�", 1, 15, 160, 67);
  m[4] = CStudent("������ 2", 7, "�", 2, 15, 162, 52);
  m[5] = CStudent("������ 2", 7, "�", 1, 15, 159, 50);
  total_students = 6;
}
