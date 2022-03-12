#include "kompania.h"
#include <iostream>
using namespace std;

int main()
{
  system("chcp 1251");
	Kompania kompania;
	int c;
	do {
		cout <<endl;
		cout<< "0. Изход от програмата "<<endl;
		cout<< "1. Добавя полет"<<endl;
		cout<< "2. Показва всички полети"<<endl;
		cin>>c;
		switch(c)
		{
			case 0: break;
			case 1: kompania.AddPolet(); break;
			case 2: kompania.PrintPoleti(); break;
			default: cout << "Грешен избор! \n"; break;
		}
	} while(c);

  system("pause");
	return 0;
}
