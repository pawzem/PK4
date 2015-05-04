#pragma once
class Facade
{
public:
	virtual void dsetroy() = 0;
	virtual void compare(string name1,string name2) = 0;
	virtual void compareAndSave(string name1, string name2,string output) = 0;
};

