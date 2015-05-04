#pragma once
#include "Facade.h"
class ComparatorFacade :
	public Facade
{
	ComparatorFacade();
public:
	ComparatorFacade init();
	void dsetroy();
	void compare(string name1, string name2);
	void compareAndSave(string name1, string name2, string output);
	void clearLog(string name);
};

