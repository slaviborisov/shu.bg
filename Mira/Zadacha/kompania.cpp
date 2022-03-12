#include "kompania.h"
#include <iostream>
#include <string>
using namespace std;

Kompania::Kompania()
{
  count = 0;
  name = "";
  m = NULL;
}

Kompania::Kompania(string n)
{
  count = 0;
  name = n;
  m = NULL;
}

void Kompania::AddPolet()
{
  Polet *p = m;
  m = new Polet[count + 1];
  for(int i = 0; i < count; i++)
    m[i] = p[i];
  m[count].Add();
  count++;
  delete []p;
}

void Kompania::PrintPoleti()
{
  for(int i = 0; i < count; i++)
    m[i].Print();
}
