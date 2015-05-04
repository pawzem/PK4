#pragma once
class Archiviser
{
public:
	Archiviser();
	void save(File* a,File* b, string outputName);
	void clear(string name);
	~Archiviser();
};

