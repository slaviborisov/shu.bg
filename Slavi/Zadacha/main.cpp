#include "class2.h"
#include <iostream>
using namespace std;

int main()
{
  system("chcp 1251");
	Class2 class2;
	int option;
	do {
		cout <<endl;
		cout << "0. Изход от програмата \n";
		cout << "1. Добавяне на \n";
		cin >> option;
		switch(option)
		{
			case 0: break;
			case 1: class2.AddSomething(); break;
			default: cout << "Грешен избор! \n"; break;
		}
	} while(option);

  system("pause");
	return 0;
}
