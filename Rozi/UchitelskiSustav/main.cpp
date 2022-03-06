#include "uchitelski-sustav.h"
#include <iostream>
using namespace std;


int main()
{
	CUSustav uchSustav;
	int c;
	do {
		cout <<endl;
		cout << "0. Изход от програмата"<<endl;
		cout << "1. Добавяне на нов учител"<<endl;
		cout << "2. Покажи учител"<<endl;
    cout << "3. Покажи учителския състав"<<endl;
		cout << "4. Изтриване на учител"<<endl;
		// cout << "5. Покажете всички филми по съответен режисьор \n";
		// cout << "6. Покажете най-новият незает филм по съответен режисьор \n";
		cout << "7. Add dummy data \n";
		cin >> c;
		switch(c)
		{
			case 0: break;
			case 1: uchSustav.AddUchitel(); break;
			case 2: uchSustav.PrintUchitel(); break;
      case 3: uchSustav.PrintUchSustav(); break;
			case 4: uchSustav.DeleteUchitel(); break;
			// case 5: uchSustav.PrintMoviesByDirector(); break;
			// case 6: uchSustav.PrintLatestAvailableMovie(); break;
			case 7: uchSustav.DummyData(); break;
			default: cout << "Грешен избор!"<<endl; break;
		}
	} while(c);

	return 0;
}
