#include "class1.h"
#include <iostream>
#include <string>
using namespace std;

Class1::Class1()
{
  nomer1 = 0;
  text1 = "";
  nomer2 = 0;
  text2 = "тест";
}

Class1::Class1(int n1, string t1, int n2, string t2 )
{
  nomer1 = n1;
  text1 = t1;
  nomer2 = n2;
  text2 = t2;
}

int Class1::operator>(Class1 myclass)
{
  return (this->nomer1 > myclass.nomer1);
}
