#include "video-library.h"
#include <iostream>
using namespace std;

int main()
{
	VideoLibrary videoLibrary;
	int option;
	do{
		cout << "0. Изход от програмата \n";
		cout << "1. Добавяне на нов филм \n";
    cout << "2. Покажи филмите \n";
		cin >> option;
		switch(option)
		{
			case 0: break;
			case 1: videoLibrary.AddMovie(); break;
      case 2: videoLibrary.PrintMovies(); break;
			default: cout << "Грешен избор! \n"; break;
		}
	} while(option);

	return 0;
}
