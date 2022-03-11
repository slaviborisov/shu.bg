#include "class2.h"
#include <iostream>
using namespace std;

int main()
{
  system("chcp 1251");
	Class2 class2;
	int c;
	do {
		cout <<endl;
		cout<< "0. Изход от програмата "<<endl;
		cout<< "1. Добавя "<<endl;
		cout<< "2. Показва "<<endl;
		cout<< "3. Показва всички "<<endl;
    cout<< "4. Изтрива "<<endl;
		cout<< "5. UsePointer()"<<endl;
		cin>>c;
		switch(c)
		{
			case 0: break;
			case 1: class2.Add(); break;
			case 2: class2.Print(); break;
			case 3: class2.PrintAll(); break;
			case 4: class2.Delete(); break;
			case 5: class2.UsePointer(); break;
			default: cout << "Грешен избор! \n"; break;
		}
	} while(c);

  system("pause");
	return 0;
}
