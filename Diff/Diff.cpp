// Diff.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TextFile.h"
#include "Archiviser.h"
#include "ComparatorFacade.h"

int _tmain(int argc, _TCHAR* argv[])
{
	string name1, name2, nameOut, mode;
	cout << "Podaj nazw� pierwszego pliku\n";
	cin >> name1;
	cout << "Podaj nazw� deugirgo pliku\n";
	cin >> name2;
	cout << "Podaj nazw� wynikowego pliku pliku(screen aby wypisa� na ekran)\n";
	cin >> nameOut;
	cout << "Podaj tryb\n";
	cin >> mode;
	
	ComparatorFacade instance;
	//instance.compareAndSave("a1.txt", "a2.txt","wyn.txt", "source");
	if (nameOut == "screen"){
		instance.compare(name1,name2,mode);
	}
	else{
		instance.compareAndSave(name1, name2, nameOut, mode); 
	}
	//instance.compare("a1.txt", "a2.txt", "source");
	
	system("pause");
	return 0;
}

