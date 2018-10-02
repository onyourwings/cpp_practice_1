#ifndef PERSONTYPE_H
#define PERSONTYPE_H
#include <iostream>
#include <string>

using namespace std;

class personType
{
public:
	personType(string, string, int );
	personType(string, string);
	personType(int);
	personType();
	void printName(void) const;
	void printAge(void) const;
	void setName (string, string);
	void setAge (int);
	string getName (void) const ;
	string getFirstname(void) const;
	string getLastname(void) const;
	int getAge (void) const;
	~personType();
private:
	string firstName;
	string lastName;
	int age;
};

#endif