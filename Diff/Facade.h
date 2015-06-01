#pragma once
class Facade
{
public:
	virtual void compare(string name1,string name2,string mode) = 0;
	virtual void compareAndSave(string name1, string name2, string output, string mode) = 0;
};

