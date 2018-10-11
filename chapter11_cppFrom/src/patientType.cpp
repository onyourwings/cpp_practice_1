#include "patientType.h"

patientType::patientType()
{
	patientID = 0;
}
patientType::patientType(string firstNameP, string lastNameP, int Id, int ageP, dateType startDateP,
						 dateType DateofBirthP, dateType dischargeDateP, doctorType reponDoctorP)
			:personType(firstNameP, lastNameP, ageP)
{
	if(Id>1)
		patientID = Id;
	else
		patientID = 0;
	startDate = startDateP;
	dateOfBirth = DateofBirthP;
	dischargeDate = dischargeDateP;
	reponDoctor = reponDoctorP;
}

patientType::patientType(string firstNameP, string lastNameP, int Id, dateType startDateP, 
						dateType dischargeDateP, doctorType reponDoctorP)
			:personType(firstNameP, lastNameP)
{
	if(Id>1)
		patientID = Id;
	else
		patientID = 0;
	startDate = startDateP;
	dischargeDate = dischargeDateP;
	reponDoctor = reponDoctorP;
}

patientType::patientType(int Id, doctorType reponDoctorP)
{
	if(Id>1)
		patientID = Id;
	else
		patientID = 0;
	reponDoctor = reponDoctorP;
}
void patientType::setPatientID(int Id)
{
	if(Id>1)
		patientID = Id;
	else
		patientID = 0;
}
void patientType::setStartDate(dateType startDateP)
{
	startDate = startDateP;
}
void patientType::setDateOfBirth(dateType DateofBirthP)
{
	dateOfBirth = DateofBirthP;
}
void patientType::setDischargeDate(dateType dischargeDateP)
{
	dischargeDate = dischargeDateP;
}
void patientType::setAttenDoctor(doctorType reponDoctorP)
{
	reponDoctor = reponDoctorP;
}

int patientType::getPatientId(void) const
{
	return patientID;
}
void patientType::getStartDate(void) const
{
	startDate.printDate();
}
void 	patientType::getDateOfBirth(void) const
{
	dateOfBirth.printDate();
}
void 	patientType::getDischargeDate(void) const
{
	 dischargeDate.printDate();
}
void 	patientType::getDoctor(void) const
{
	 reponDoctor.getName();
}

patientType::~patientType()
{

}