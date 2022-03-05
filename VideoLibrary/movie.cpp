#include "movie.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string media_types[2] = { "Видеокасета", "DVD"};
string statuses[2]    = { "Свободна", "Заета" };

Movie::Movie()
{
  unique_id  = 0;
  media_type = 0;
  status     = 0;
  year       = 0;
  price      = 0;
  name       = "";
  director   = "";
}

Movie::Movie(
  int _unique_id,
  int _media_type,
  int _status,
  float _price,
  unsigned _year,
  string _name,
  string _director
)
{
  unique_id  = _unique_id;
  media_type = _media_type;
  status     = _status;
  price      = _price;
  year       = _year;
  name       = _name;
  director   = _director;
}

int Movie::operator>(Movie movie)
{
  // по въведен режисьор и вид на носителя отпечатва данните за най-новият му незает филм
	return (
    status     == 0 &&
    media_type == movie.media_type &&
    director   == movie.director &&
    year        > movie.year
  );
}

void Movie::Add(int _unique_id)
{
  cout<<"Въведете тип на носител: 0 - Видеокасета, 1 - DVD: ";
  cin>>media_type;
  cout<<"Въведете статус на филма: 0 - Свободна, 1 - Заета: ";
  cin>>status;
  cout<<"Въведете име на филма: ";
  cin.ignore();
  getline(cin,name);
  cout<<"Въведете цена: ";
  cin>>price;
  cout<<"Въведете година на създаване: ";
  cin>>year;
  cout<<"Въведете режисьор ";
  cin.ignore();
  getline(cin,director);
  unique_id = _unique_id;
}

void Movie::PrintData()
{
  cout<<"Tип носител: "<<media_types[media_type]<<endl;
  cout<<"Статус: "<<statuses[status]<<endl;
  cout<<"Име на филма: "<<name<<endl;
  cout<<"Цена: "<<fixed<<setprecision(2)<<price<<"лв. \n";
  cout<<"Година на създаване: "<<year<<"год. \n";
  cout<<"Режисьор: "<<director<<endl;
  cout<<"--------------------------- \n";
}

void Movie::DummyData(int _unique_id)
{
  media_type = rand() % 2;
  status = rand() % 2;
  name = "Movie "+to_string(_unique_id);
  price = _unique_id;
  year =  1991+_unique_id;
  director = "Режисьор "+to_string((_unique_id % 2 == 0) ? 0 : 1);
  unique_id = _unique_id;
}