#include "personType.h"

personType::personType()
{
	firstName = "";
	lastName = "";
	age = 0;
}

personType::personType(string firstNameP, string lastNameP, int ageP)
{
	firstName = firstNameP;
	lastName = lastNameP;
	if(ageP > 0)
		age = ageP;
	else
		age = 0;
}

personType::personType(string firstNameP, string lastNameP)
{
	firstName= firstNameP;
	lastName = lastNameP;
	age = 0;
}

personType::personType(int ageP)
{
	firstName = "";
	lastName = "";
	if(ageP > 0)
		age = ageP;
	else
		age = 0;
}

void personType::printName(void) const
{
	cout << firstName << " " << lastName;
}

void personType::printAge(void) const
{
	cout << age;
}

void personType::setName(string firstNameP, lastNameP) 
{
	firstName= firstNameP;
	lastName = lastNameP;
}
void personType::setAge(int ageP)
{
	if(ageP > 0)
		age = ageP;
}

void personType::getName(void) const
{
	return (firstName + lastName)
}

void personType::getFirstname(void) const
{
	return firstName;
}
void personType::getLastname(void) const
{
	return lastName;
}

void personType::getAge(void) const
{
	return age;
}

personType::~personType()
{
	
}

