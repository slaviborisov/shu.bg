#pragma once
#include <string>
using namespace std;

struct MovieData {
  int unique_id; // уникален номер
  int media_type; // тип на носител (Видеокасета, DVD)
  int status; // Статус (Свободна, Заета)
  unsigned year; // Година на създаване
  float price; // Цена
  string name; // Име на филм
  string director; // Режисьор
};

class Movie
{
  private:
    MovieData data;

  public:
    Movie();
    Movie(MovieData data);
    int GetID() { return data.unique_id; }
    int operator>(Movie); //предефиниране на оператор >
    int GetMediaType() { return data.media_type; }
    void Add(int); // метод за добавяне на нов филм
    void PrintData(); // метод за отпечатване на информацията на обект от този клас?
    string GetDirector() { return data.director; }
};
