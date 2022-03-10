#pragma once
#include <string>
using namespace std;

class CAnimal
{
  private:
    string reg_number; // регистрационен номер на животното
    string name; // име на животното
    int age; // въззраст на животното
    int sex; // пол на животното
    string kind; // вид животно
    int food_type; // вид храна
    float food_amount; // количество храна

  public:
    CAnimal();
    CAnimal(string, string, int, int, string, int, float);
    int operator>(CAnimal); //предефиниране на оператор <
    void Add(); //добавяне на ново животно
    void Print(); //отпечатване на животно
    string GetRegNomer() { return reg_number; }
    string GetName() { return name; }
    int GetAge() { return age; }
    int GetSex() { return sex; }
    string GetKind() { return kind; }
    int GetFoodType() { return food_type; }
    int GetFoddAmount() {return food_amount; }
};
