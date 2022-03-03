#include "movie.h"
#include <iostream>
#include <string>
using namespace std;

string media_types[2] = { "Видеокасета", "DVD"};
string statuses[2]    = { "Свободна", "Заета" };

Movie::Movie()
{
  unique_id  = 0;
  media_type = 0;
  status     = 0;
  price      = 0;
  name       = "";
  year       = "";
  director   = "";
}

Movie::Movie(
  int _unique_id,
  int _media_type,
  int _status,
  float _price,
  string _name,
  string _year,
  string _director
)
{
  unique_id  = _unique_id;
  media_type = _media_type;
  status     = _status;
  price      = _price;
  name       = _name;
  year       = _year;
  director   = _director;
}

void Movie::Add(int _unique_id)
{
  cout<<"Въведете тип на носител: 0 - Видеокасета, 1 - DVD: ";
  cin>>media_type;
  cout<<"Въведете статус на филма: 0 - Свободна, 1 - Заета: ";
  cin>>status;
  cout<<"Въведете име на филма: ";
  cin>>name;
  cout<<"Въведете цена: ";
  cin>>price;
  cout<<"Въведете година на създаване: ";
  cin>>year;
  cout<<"Въведете режисьор ";
  cin>>director;
  unique_id = _unique_id;
}


void Movie::PrintData()
{
  cout<<"Tип носител: "<<media_types[media_type]<<endl;
  cout<<"Статус: "<<statuses[status]<<endl;
  cout<<"Име на филма: "<<name<<endl;
  cout<<"Цена: "<<price<<"лв."<<endl;
  cout<<"Година на създаване: "<<year<<endl;
  cout<<"Режисьор "<<director<<endl;
  cout<<"--------------------------- \n";
}
