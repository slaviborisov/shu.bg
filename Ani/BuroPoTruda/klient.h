#pragma once
#include <string>
using namespace std;

class CKlient
{
  private:
    int reg_nomer; //Регистрационен номер
    string ime; //Име на клиента
    long int egn; //ЕГН на клиента
    int pol; //Пол на клиента
    int vuzrast; //Възраст на клиента
    string profesiq; //Професия на клиента
    int staj; //Стаж на клиента


  public:
    CKlient();
    CKlient(int, string, long int, int, int, string, int);
    int operator>(CKlient); //Предефиниране на оператор >
    int RegNomer() { return reg_nomer; }
    long int EGN() { return egn; }
    void Add(); //Метод за добавяне на нов филм
    void Print(); //Метод за отпечатване на информацията на клиента
};

