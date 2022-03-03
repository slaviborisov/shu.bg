#pragma once
#include <string>
using namespace std;

class Movie
{
  private:
  int unique_id; // уникален номер
  int media_type; // тип на носител (Видеокасета, DVD)
  int status; // Статус (Свободна, Заета)
  string name; // Име на филм
  string director; // Режисьор
  unsigned int year; // Година на създаване
  float price; // Цена

  public:
    Movie();
    Movie(int, int, int, string, string, unsigned int, float);
    void Add(int); // метод за добавяне на нов филм
    void PrintData(); // метод за отпечатване на информацията на обект от този клас?
    Movie operator<(Movie); //предеф. опер. за сравнение по год. на създаване;
    void DummyData(int);
    int GetID() { return unique_id; }
};
