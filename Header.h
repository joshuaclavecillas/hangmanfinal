#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string> 
#include <ctime>
#include <vector>
#include <algorithm>
#include <cctype>

string library(string &codeword, int characters)
{
	int m;
	vector<string> lib;
		if (characters == 4)
		{
			lib.push_back("bake");
			lib.push_back("word");
			lib.push_back("list");
			lib.push_back("four");
			lib.push_back("five");
			lib.push_back("nine");
			lib.push_back("good");
			lib.push_back("best");
			lib.push_back("cute");
			lib.push_back("zero");
			lib.push_back("huge");
			lib.push_back("cool");
			lib.push_back("tree");
			lib.push_back("race");
			lib.push_back("rice");
			lib.push_back("keep");
			lib.push_back("lace");
			lib.push_back("beam");
			lib.push_back("game");
			lib.push_back("mars");
			
		}
	srand(time(0));
	m = rand() % 20;
	codeword = lib[m];
	return codeword;
}