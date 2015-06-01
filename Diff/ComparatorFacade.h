#pragma once
#include "Facade.h"
#include "SorceFile.h"
#include "TextFile.h"
#include "Archiviser.h"
class ComparatorFacade :
	public Facade
{
public:
	ComparatorFacade();
	~ComparatorFacade();
	void compare(string name1, string name2,string mode);
	void compareAndSave(string name1, string name2, string output, string mode);
};

