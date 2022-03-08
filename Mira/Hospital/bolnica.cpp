#include "bolnica.h"
#include <iostream>
#include <string>
using namespace std;

CBolnica::CBolnica()
{
	m = NULL;
  broi_lekari = 0;
  cout<< "Въведете име на болница: ";
  getline(cin,name);
}

CBolnica::CBolnica(string b_name)
{
	m = NULL;
  broi_lekari = 0;
  name = b_name;
}

void CBolnica::AddLekar()
{
  CLekar *p = m;
  m = new CLekar[broi_lekari + 1];
  for(int i = 0; i < broi_lekari; i++)
    m[i] = p[i];
  m[broi_lekari].Add();
  broi_lekari++;
  delete []p;
}

void CBolnica::PrintLekari()
{
  for(int i = 0; i < broi_lekari; i++)
    m[i].Print();
}

int CBolnica::NameriLekarPoNomer(unsigned int number)
{
  /*
    Намира и връща ключа "i"  от масива "m" на лекаря, чиито номер съвпада с този който търсим.
    Например търсим лекар с number 3:
      - Претърся с цикъла отдолу всеки елемент от масива "m".
      - Ако намери съвпадение (number == m[i].GetNumber())
        - връща с "return" ключа "i" от масива - примерно 2
      - Ако не намери връща с "return" -1;
  */
  for(int i = 0; i < broi_lekari; i++)
    if (number == m[i].GetNumber()) return i;
  return -1;
}

void CBolnica::PrintLekarPoNomer()
{
  unsigned int number;
  cout<<"Въведете идентификационен номер на лекаря, който желате да изтриете: ";
  cin>>number;

  int n = NameriLekarPoNomer(number);
  if(n != -1)
    m[n].Print();
}

void CBolnica::DeleteLekar()
{
  unsigned int number;
  cout<<"Въведете идентификационен номер на лекаря, който желате да изтриете: ";
  cin>>number;

  if(NameriLekarPoNomer(number) != -1) {
    CLekar *p = m;
    m = new CLekar[broi_lekari - 1];

    int j, i;
    for(j = 0, i = 0; i < broi_lekari; i++)
      if(p[i].GetNumber() != number)
        m[j++] = p[i];
    broi_lekari--;
    delete []p;
  }
  else
    cout<<"Не беше намерен лекар по въведения номер! \n";
}

void CBolnica::PrintLekariNadVuzrast()
{
  unsigned int vuzrast;
  cout<<"Въведете възраст: ";
  cin>>vuzrast;

  bool lekari = false;
  for(int i = 0; i < broi_lekari; i++)
    if (m[i].GetVuzrast() > vuzrast) {
      m[i].Print();
      lekari = true;
    }
  if(!lekari)
    cout<<"Не можахме да намерим лекари над възраст "<<vuzrast<<endl;
}

void CBolnica::PrintNaiMladPediatur()
{
  /*
    тук вероятно има грешка в условието на задачата, защото за да почнем да сравняваме
    кой е най-младия педиатър с предефиниран оператор "<" трябва първо да знаем кой е
    най-стария, а ние не го знаем! Можем да го разберем, но не мисля, че това е била идеята тук.
    Затова слагаме като стойност на най-стар Педиатър 100.
  */

  int nai_star_pediatur = 100;
  CLekar pediatur(0, "", nai_star_pediatur, "", "");
  for(int i = 0; i < broi_lekari; i++)
    if(m[i].GetSpecialnost() == "Педиатър") {
      if(m[i] < pediatur)
        pediatur = m[i];
    }

  if(pediatur.GetVuzrast() < nai_star_pediatur)
    pediatur.Print();
  else
    cout<<"Нe можахме да откриме Педиатър по-млад от "<<nai_star_pediatur<<"год."<<endl;
}


void CBolnica::DummyData()
{
  m = new CLekar[8];
  m[0] = CLekar(1, "Лекар 1",  22, "12.01.2000г.", "Психотерапевт");
  m[1] = CLekar(2, "Лекар 2",  28, "12.01.1994г.", "Хирург");
  m[2] = CLekar(3, "Лекар 3",  33, "12.01.1989г.", "Доктор ох боли");
  m[3] = CLekar(4, "Лекар 4",  38, "12.01.2011г.", "Доктор ох сърби");
  m[4] = CLekar(5, "Лекар 5",  20, "12.01.2021г.", "Педиатър");
  m[5] = CLekar(6, "Лекар 6",  49, "12.01.2015г.", "Гинеколог");
  m[6] = CLekar(7, "Лекар 7",  48, "12.01.1999.",  "Педиатър");
  m[7] = CLekar(8, "Лекар 8",  66, "12.01.1989.",  "Педиатър");
  broi_lekari = 8;
}
