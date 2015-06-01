#include "stdafx.h"
#include "SorceFile.h"

SorceFile::SorceFile(string name)
{
	ifstream fin(name);
	string line;
	string cont ="";
	if (fin.is_open()){
		while (!fin.eof()){
			getline(fin, line);
			cont += line;
		}
		this->content.push_back(cont);
		fin.close();
	}
	else throw (string)("Program couldn't open file: " + name + "\n");

}


SorceFile::~SorceFile()
{
}


list<string> SorceFile::getContetnt(){
	return this->content;
}

list<int> SorceFile::compare(File * f){
	list<int> diffs;
	string first, second;
	smatch m;
	string word4 = "[[:w:]]+[[:s:]]+[[:w:]]+[(]{1}[^)]*[)]{1}";


	first = *(this->getContetnt().begin());
	second = *(f->getContetnt().begin()); 
	string tab[] = { first, second };
	regex e(word4);
	list<string> out;
	out.push_back(first);
	out.push_back("Te same funkcje\n");
	for (int i = 0; i < 2; ++i){
		string s = tab[i];
		string args = "";
		while (std::regex_search(s, m, e)) {
			args = "";
			for (auto x : m){
				args += x;
			}
			s = m.suffix().str();
			if(i==1)out.push_back(args);
			else if(find(out.begin(),out.end(),args)!=out.end()){
				out.erase(find(out.begin(), out.end(), args));
			}
		}
	}
	out.push_back("Drugi plik\n");
	this->content = out;
	return diffs;
}
bool SorceFile::compare(string pattern){
	for (auto i : this->getContetnt()){
		if (i.find(pattern) != string::npos)return true;
	}
	return false;
}