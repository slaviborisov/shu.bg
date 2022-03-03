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
  string price; // Цена
  string year; // Година на създаване
  string director; // Режисьор

  public:
    Movie();
    Movie(int, int, int, string, string, string, string);
    void Add(int); // метод за добавяне на нов филм
    void PrintData(); // метод за отпечатване на информацията на обект от този клас?
    Movie operator<(Movie); //предеф. опер. за сравнение по год. на създаване;
};
