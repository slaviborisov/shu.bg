#include "software.h"
#pragma once
#include <string>
using namespace std;

class CCompany
{
  private:
    int count;
    string name;
    int total_products;
    CSoftware *m;

  public:
    CCompany();
    CCompany(int, string);

    int Find(int);
    void Add();
    void PrintAll();
    void PrintProductsBySize();
    void PrintTurnoverByCompany();
};
