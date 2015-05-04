// Diff.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TextFile.h"


int _tmain(int argc, _TCHAR* argv[])
{
	TextFile a("a1.txt");
	TextFile b("a2.txt");
	cout << a.compare(&b).size() << endl;
	cout << a.compare("main")<<endl;
	
	system("pause");
	return 0;
}

