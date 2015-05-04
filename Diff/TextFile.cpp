#include "stdafx.h"
#include "TextFile.h"


TextFile::TextFile(string name)
{
	ifstream fin(name);
	string line;
	if (fin.is_open()){
		while (!fin.eof()){
			getline(fin, line);
			this->content.push_back(line);
		}
		fin.close();
	}
	else throw (string)("Program couldn't open file: " + name + "\n");
	
}


TextFile::~TextFile()
{
}


list<string> TextFile::getContetnt(){
	return this->content;
}

list<int> TextFile::compare(File * f){
	list<int> diffs;
	int line = 0;
	list<string> base, comparator;
	base = this->getContetnt();
	comparator = f->getContetnt();
	auto that = comparator.begin();
	for (auto it = base.begin() ; it != base.end(); ++it){
		if (*it != *that) diffs.push_back(line);
		if (++that == comparator.end())break;
		++line;
	}
	
	diffs.push_back(this->getContetnt().size() - f->getContetnt().size());
	return diffs;
}
bool TextFile::compare(string pattern){
	for (auto i : this->getContetnt()){
		if (i.find(pattern) != string::npos)return true;
	}
	return false;
}

