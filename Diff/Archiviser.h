#pragma once


#include "File.h"
class Archiviser
{
	string fileName;
public:
	Archiviser(string name);
	void save(File* a,File* b);
	~Archiviser();
};

