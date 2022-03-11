#include "class1.h"
#include <iostream>
#include <string>
using namespace std;

Class1::Class1()
{
  number = 0;
  text = "";
}

Class1::Class1(int n, string t)
{
  number = n;
  text = t;
}

int Class1::operator>(Class1 myclass)
{
  return (this->number > myclass.number);
}

void Class1::Add()
{
  cout<<"Въведете : ";
  cin>>number;

  cout<<"Въведете : ";
  cin.ignore(cin.rdbuf()->in_avail() + 1); //игнорира паразитните Ентъри
  getline(cin,text);
}

void Class1::Print()
{
  cout<<number<<"\t"<<text<<endl;
}
