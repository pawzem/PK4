#include "stdafx.h"
#include "ComparatorFacade.h"


ComparatorFacade::ComparatorFacade()
{
}


ComparatorFacade::~ComparatorFacade()
{
}

void ComparatorFacade::compare(string name1, string name2, string mode){
	File *first = NULL, *second = NULL;
	try{
		if (mode == "text"){
			first = new TextFile(name1);
			second = new TextFile(name2);

		}
		else if (mode == "source"){
			first = new SorceFile(name1);
			second = new SorceFile(name2);
		}
		list<int> cmp =first->compare(second);

		ostream_iterator<string, char> iter(cout, "\n");
		list<string> pom = first->getContetnt();
		if (mode == "source"){
			copy(pom.begin(), pom.end(), iter);
			pom = second->getContetnt();
			copy(pom.begin(), pom.end(), iter);
		}

	}
	catch (string error){
		cout << error << endl;
	}
	catch (...){
		cout << "Wystapil problem niespodziewany" << endl;
	}
}

void ComparatorFacade::compareAndSave(string name1, string name2, string output, string mode){
	File *first= NULL, *second = NULL;
	try{
		if (mode == "text"){
			first = new TextFile(name1);
			second = new TextFile(name2);

		}
		else if (mode == "source"){
			first = new SorceFile(name1);
			second = new SorceFile(name2);
		}
		Archiviser arch(output);
		arch.save(first, second);
	}
	catch (string error){
		cout << error << endl;
	}
	catch (...){
		cout << "Wystapil problem niespodziewany" << endl;
	}
}
