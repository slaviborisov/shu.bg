#include "movie.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string media_types[2] = { "Видеокасета", "DVD"};
string statuses[2]    = { "Свободна", "Заета" };

Movie::Movie()
{
  data.unique_id  = 0;
  data.media_type = 0;
  data.status     = 0;
  data.year       = 0;
  data.price      = 0;
  data.name       = "";
  data.director   = "";
}

Movie::Movie(MovieData _movie_data)
{
  data = _movie_data;
}

int Movie::operator>(Movie movie)
{
  // по въведен режисьор и вид на носителя отпечатва данните за най-новият му незает филм
	return (
    data.status     == 0 &&
    data.media_type == movie.data.media_type &&
    data.director   == movie.data.director &&
    data.year        > movie.data.year
  );
}

void Movie::Add(int _unique_id)
{
  cout<<"Въведете тип на носител: 0 - Видеокасета, 1 - DVD: ";
  cin>>data.media_type;

  cout<<"Въведете статус на филма: 0 - Свободна, 1 - Заета: ";
  cin>>data.status;

  cout<<"Въведете име на филма: ";
  cin.ignore();
  getline(cin,data.name);

  cout<<"Въведете цена: ";
  cin>>data.price;

  cout<<"Въведете година на създаване: ";
  cin>>data.year;

  cout<<"Въведете режисьор ";
  cin.ignore();
  getline(cin,data.director);

  data.unique_id = _unique_id;
}

void Movie::PrintData()
{
  cout<<"Номер в архива: "<<data.unique_id<<endl;
  cout<<"Tип носител: "<<media_types[data.media_type]<<endl;
  cout<<"Статус: "<<statuses[data.status]<<endl;
  cout<<"Име на филма: "<<data.name<<endl;
  cout<<"Цена: "<<fixed<<setprecision(2)<<data.price<<"лв. \n";
  cout<<"Година на създаване: "<<data.year<<"год. \n";
  cout<<"Режисьор: "<<data.director<<endl;
  cout<<"--------------------------- \n";
}
