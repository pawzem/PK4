#pragma once
class File
{
public:
	virtual list<string> getContetnt() = 0;
	virtual list<int> compare(File * f) = 0;
	virtual bool compare(string pattern) = 0;
};

