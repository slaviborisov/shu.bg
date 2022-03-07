#pragma once
#include <string>
using namespace std;

class Movie
{
  private:
  int unique_id; // уникален номер
  int media_type; // тип на носител (Видеокасета, DVD)
  int status; // Статус (Свободна, Заета)
  unsigned year; // Година на създаване
  float price; // Цена
  string name; // Име на филм
  string director; // Режисьор

  public:
    Movie();
    Movie(int, int, int, float, unsigned, string, string);
    int GetID() { return unique_id; }
    int operator>(Movie); //предефиниране на оператор >
    int GetMediaType() { return media_type; }
    void Add(int); // метод за добавяне на нов филм
    void PrintData(); // метод за отпечатване на информацията на обект от този клас?
    void DummyData(int);
    string GetDirector() { return director; }
};
