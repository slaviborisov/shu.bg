#include "school.h"
#include <iostream>
using namespace std;

int main()
{
  system("chcp 1251");
  CSchool school;
  int c;
  do {
    cout <<endl;
    cout << "0. ����� �� ����������"<<endl;
    cout << "1. �������� �� ��� ������"<<endl;
    cout << "2. ��������� �� ������ �������"<<endl;
    cout << "3. ������ ������ �� ����, ��������� � ����� � �����"<<endl;
    cout << "4. ������ ������� �� ������ �������, ����� ������� � ��� ����������"<<endl;
    cout << "5. ������ ������ �������, �� ����� ������� � ��-����� �� ����������"<<endl;
    cout << "6. ������ ����� �� ���-������ ������ �� ������� ����"<<endl;
    cout << "10. Dummy data"<<endl;
    cin >> c;
    switch(c)
    {
      case 0: break;
      case 1: school.AddStudent(); break;
      case 2: school.PrintAllStudents(); break;
      case 3: school.PrintStudentByParams(); break;
      case 4: school.StudentsLessThanAge(); break;
      case 5: school.StudentsLessThanWeight(); break;
      case 6: school.TheHeaviestStudent(); break;
	    case 10: school.DummyData(); break;
      default: cout << "������ �����!"<<endl; break;
    }
  } while(c);

  system("pause");
  return 0;
}

