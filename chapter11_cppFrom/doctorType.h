#ifndef DOCTORTYPE_H
#define DOCTORTYPE_H
#include <iostream>
#include <string>
#include "personType.h"

using namespace std;	

class doctorType : public personType
{
public:
	doctorType();
	doctorType(string, string, string, int, int);
	doctorType(string, string, string);
	doctorType(string, int);
	void setSpec(string);
	void setFeeRatio(int);
	int getFeeRatio();
	string getSpec(void) const;
	~doctorType();
private:
	string speciality;
	int feeRatio;
	
};

#endif