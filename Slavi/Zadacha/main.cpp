#include "company.h"
#include <iostream>
using namespace std;

int main()
{
  system("chcp 1251");
	CCompany CCompany;
	int c;
	do {
		cout <<endl;
		cout<< "0. Изход от програмата "<<endl;
		cout<< "1. Добавя нов продкт"<<endl;
		cout<< "2. Показва всички продукти"<<endl;
		cout<< "3. Показва имената на всички програмни продукти с обем по-голям от зададения"<<endl;
    cout<< "4. Показва оборота от продадените програмни продукти по зададена фирма производител"<<endl;
		cin>>c;
		switch(c)
		{
			case 0: break;
			case 1: CCompany.Add(); break;
			case 2: CCompany.PrintAll(); break;
			case 3: CCompany.PrintProductsBySize(); break;
			case 4: CCompany.PrintTurnoverByCompany(); break;
			default: cout << "Грешен избор! \n"; break;
		}
	} while(c);

  system("pause");
	return 0;
}
