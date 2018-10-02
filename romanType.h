#ifndef ROMANTYPE_H
#define ROMANTYPE_H
#include <iostream>
#include <string>
using namespace std;

class romanType 
{
public: 
	romanType();
	romanType(std::string romanNumP);
	romanType(int intNumP);
	void setRomanNum(std::string romanNumP);
	void setIntNum(int intNumP);
	int getIntNum(void);
	std::string getRomanNum(void);
	~romanType();

private:
	int intNum;
	std::string romanNum;
	void cvtRoman2Int(void);
	void cvtInt2Roman(void);
	int cvtSingleRoman(char romanCh);
	std::string cvtSingleInt(int intN, int lev);
};

#endif