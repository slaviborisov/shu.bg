#include "class2.h"
#include <iostream>
#include <string>
using namespace std;

Class2::Class2()
{
  count = 0;
  name = "";
  m = NULL;
}

Class2::Class2(string n)
{
  count = 0;
  name = n;
  m = NULL;
}

int Class2::Find(int number)
{
  for(int i = 0; i < count; i++)
    if (m[i].GetNumber()== number) return i;
  return -1;
}

void Class2::Add()
{
  string something;
  cout<<"Добавете : ";
  cin>>something;
}

void Class2::Print()
{
  int number;
  cout<<"Въведете : ";
  cin>>number;

  for(int i = 0; i < count; i++)
    if(m[i].GetNumber() == number)
    m[i].Print();
}

void Class2::PrintAll()
{
  for(int i = 0; i < count; i++)
    m[i].Print();
}

void Class2::Delete()
{
  int number;
  cout<<"Въведете : ";
  cin>>number;

  // string text;
  // cout<<"Въведете : ";
  // cin>>text;

  if(Find(number) != -1) {
    Class1 *p = m;
    m = new Class1[count - 1];

    int j, i;
    for(j = 0, i = 0; i < count; i++)
      if(p[i].GetNumber() != number)
        m[j++] = p[i];
    count--;
    delete []p;
  }
  else
    cout<<"Не беше намерен ! "<<endl;
}

void Class2::UsePointer()
{
  int number;
  cout<<"Въведете : ";
  cin>>number;

  // string text;
  // cout<<"Въведете : ";
  // cin>>text;

  bool found = false;
  Class1 class1(number, "");
  for(int i = 0; i < count; i++)
    if(m[i] > class1) {
      m[i].Print();
      found = true;
    }

  if(found)
    class1.Print();
  else
    cout<<"Не беше намерен !"<<endl;
}

