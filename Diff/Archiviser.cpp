#include "stdafx.h"
#include "Archiviser.h"


Archiviser::Archiviser(string name)
{
	this->fileName = name;
}


Archiviser::~Archiviser()
{
}

void Archiviser::save(File* a, File* b){
	list<int> diff = a->compare(b);
	ofstream fout(fileName);
	string line;
	if (fout.is_open()){
		for (auto it = diff.begin(); it != diff.end(); ++it){
			fout << *it << endl;
		}
		for (string wyj : a->getContetnt())fout << wyj << endl;
		for (string wyj : b->getContetnt())fout << wyj << endl;


		fout.close();
	}
	else throw (string)("Program couldn't open file: " + fileName + "\n");


}