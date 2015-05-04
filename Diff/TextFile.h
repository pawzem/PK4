#pragma once
#include "File.h"
class TextFile :
	public File
{
	list<string> content;
public:
	TextFile(string name);
	~TextFile();


	list<string> getContetnt();
	list<int> compare(File * f);
	bool compare(string pattern);
};

