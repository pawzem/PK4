#pragma once
#include "File.h"
class SorceFile :
	public File
{
	list<string> content;
public:
	SorceFile(string name);
	~SorceFile();

	list<string> getContetnt();//ToDo
	list<int> compare(File * f);//ToDo
	bool compare(string pattern);//ToDo
};

