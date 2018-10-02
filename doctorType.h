#ifndef DOCTORTYPE_H
#define DOCTORTYPE_H
#include <iostream>
#include <string>

using namespace std;	

class doctorType : public personType
{
public:
	doctorType();
	doctorType(string, string, string, int);
	doctorType(string, string, string);
	doctorType(string, int);
	void setSpec(string);
	string getSpec(void) const;
	~doctorType();
private:
	string speciality;
}

#endif