#include "school.h"
#include <iostream>
#include <string>
using namespace std;

CSchool::CSchool()
{
	m = NULL;
  total_students = 0;
  cout<< "Въведете име на училище: ";
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
  cout<<"Въведете клас на ученика: ";
  cin>>grade;

  string section;
  cout<<"Въведете паралелка на ученика: ";
  cin.ignore(cin.rdbuf()->in_avail() + 1); //Игнорира паразитните Ентъри
  getline(cin,section);

  int number;
  cout<<"Въведете номер на ученика: ";
  cin>>number;

  bool hasStudent = false;
  for(int i = 0; i < total_students; i++)
    if(m[i].GetGrade() == grade && m[i].GetSection() == section && m[i].GetNumber() == number) {
      m[i].Print();
      hasStudent = true;
    }

  if(hasStudent == false) {
    cout<<"Не намерихме ученик!"<<endl;
  }
}

void CSchool::StudentsLessThanAge()
{
  int age;
  cout<<"Въведете възраст на ученика: ";
  cin>>age;
  for(int i = 0; i < total_students; i++)
    if(age > m[i].GetAge() )
      cout<<m[i].GetName()<<" | ";
}

void CSchool::StudentsLessThanWeight()
{
  int weight;
  cout<<"Въведете тегло: ";
  cin>>weight;
  for(int i = 0; i < total_students; i++)
    if(weight > m[i].GetWeight() )
      m[i].Print();
}

void CSchool::TheHeaviestStudent()
{
  int grade;
  cout<<"Въведете клас: ";
  cin>>grade;
  CStudent student("", 0, "", 0, 0, 0, grade);
  for(int i = 0; i < total_students; i++)
    if(grade == m[i].GetGrade() )
      if(m[i] > student)
        student = m[i];
  cout<<"Най-тежкият ученик е: "<<student.GetName()<<endl;
}

void CSchool::DummyData()
{
  m = new CStudent[6];
  m[0] = CStudent("Ученик 1", 4, "А", 1, 12, 130, 35);
  m[1] = CStudent("Ученик 2", 4, "А", 2, 12, 145, 45);
  m[2] = CStudent("Ученик 3", 4, "А", 5, 13, 150, 40);
  m[3] = CStudent("Ученик 1", 7, "А", 1, 15, 160, 67);
  m[4] = CStudent("Ученик 2", 7, "А", 2, 15, 162, 52);
  m[5] = CStudent("Ученик 2", 7, "Б", 1, 15, 159, 50);
  total_students = 6;
}
