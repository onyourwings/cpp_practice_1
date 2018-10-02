#include "doctorType.h"

doctorType::doctorType()
{
	speciality = "Undefined";
}

doctorType::doctorType(string firstNameP, string lastNameP, string specP, int ageP)
			:personType(firstNameP, lastNameP, ageP)
{
	speciality = specP;
}

doctorType::doctorType(string firstNameP, string lastNameP, string specP)
			:personType(firstNameP, lastNameP)
{
	speciality = specP;
}
doctorType::doctorType(string specP, int ageP)
			:personType(ageP)
{
	speciality = specP;
}
void doctorType::setSpec(string specP)
{
	speciality = specP;
}
string doctorType::getSpec(void) const
{
	return speciality;
}
doctorType::~doctorType()
{

}