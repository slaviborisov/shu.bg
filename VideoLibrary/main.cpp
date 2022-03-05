#include "video-library.h"
#include <iostream>
using namespace std;

/*
	# За игнориране паразитните ентъри:
	# cin.ignore(cin.rdbuf()->in_avail()); // не работи на Mac(нямам компютър на windows)
	# cin.ignore(); работи на Mac;
	# ОК, след изветно търсене забелязах, че работи като се добави 1-ца накрая:
	# cin.ignore(cin.rdbuf()->in_avail()+1);
*/

int main()
{
	VideoLibrary videoLibrary;
	int option;
	do {
		cout <<endl;
		cout << "0. Изход от програмата \n";
		cout << "1. Добавяне на нов филм \n";
		cout << "2. Покажи информацията за конкретен филм \n";
    cout << "3. Покажи всички филми \n";
		cout << "4. Изтриване на филм \n";
		cout << "5. Покажете всички филми по съответен режисьор \n";
		cout << "6. Покажете най-новият незает филм по съответен режисьор \n";
		cout << "7. Add dummy data \n";
		cin >> option;
		switch(option)
		{
			case 0: break;
			case 1: videoLibrary.AddMovie(); break;
			case 2: videoLibrary.PrintMovie(); break;
      case 3: videoLibrary.PrintAllMovies(); break;
			case 4: videoLibrary.RemoveMovie(); break;
			case 5: videoLibrary.PrintMoviesByDirector(); break;
			case 6: videoLibrary.PrintLatestAvailableMovie(); break;
			case 7: videoLibrary.DummyData(10); break;
			default: cout << "Грешен избор! \n"; break;
		}
	} while(option);

	return 0;
}