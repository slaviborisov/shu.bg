#include "software.h"
#include <iostream>
#include <string>
using namespace std;

CSoftware::CSoftware()
{
  product_name = "";
  manufacturer = "";
  size = 0;
  price = 0;
  total_salse = 0;
}

CSoftware::CSoftware(string _product_name, string _manufacturer, int _size, float _price, int _total_salse)
{
  product_name = _product_name;
  manufacturer = _manufacturer;
  size = _size;
  price = _price;
  total_salse = _total_salse;
}

void CSoftware::Add()
{
  cout<<"Въведете име на продукта: ";
  cin.ignore();
  getline(cin,product_name);

  cout<<"Въведете име на фирмата производител: ";
  cin.ignore();
  getline(cin,manufacturer);

  cout<<"Въведете размер в мегабайти: ";
  cin>>size;

  cout<<"Въведете цена: ";
  cin>>price;

  cout<<"Въведете брой продажби: ";
  cin>>total_salse;
}

void CSoftware::Print()
{
  cout<<product_name<<"\t"<<manufacturer<<"\t"<<size<<"\t"<<price<<"\t"<<total_salse<<endl;
}
