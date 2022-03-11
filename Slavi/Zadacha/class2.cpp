#include "class2.h"
#include <iostream>
#include <string>
using namespace std;

Class2::Class2()
{
  nomer1 = 0;
  text1 = "";
}

Class2::Class2(int n1, string t1 )
{
  nomer1 = n1;
  text1 = t1;
}

  void Class2::AddSomething()
  {
    string something;
    cout<<"Въвдете нещо: ";
    cin>>something;
  }
