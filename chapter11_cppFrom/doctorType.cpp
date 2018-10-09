#include "doctorType.h"

doctorType::doctorType()
{
	speciality = "Undefined";
}

doctorType::doctorType(string firstNameP, string lastNameP, string specP, int ageP, int feeRatioP)
			:personType(firstNameP, lastNameP, ageP)
{
	speciality = specP;
	if(feeRatioP>0)
	feeRatio = feeRatioP;
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
void doctorType::setFeeRatio(int feeRatioP)
{
	if(feeRatioP>0)
		feeRatio = feeRatioP;
}
int doctorType::getFeeRatio(void)
{
	return feeRatio;
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