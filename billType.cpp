#include "billType.h"

billType::billType()
{
	patientId = 0;
	doctorFeeRatio = 1;
	MedicFeePrice = 1000;
	MedicUnits = 0;
}
billType::billType(patientType patientP, int doctorFeeRatioP, int medicFeePriceP, int medicUnitsP)
{
	patient = patientP;
	if(doctorFeeRatioP>0)
		doctorFeeRatio = doctorFeeRatioP;
	else
		doctorFeeRatio = 1;
	if(MedicFeePriceP>0)
		MedicFeePrice = medicFeePriceP;
	else
		MedicFeePrice = 1000;
	if(medicUnitsP>0)
		MedicUnits = medicUnitsP;
	else
		MedicUnits = 0;
}
void billType::setPatient()
{
	if(Id>1)
		patient.patientID = Id;
	else
		patient.patientID = 0;
	patient.startDate = startDateP;
	patient.dateOfBirth = DateofBirthP;
	patient.dischargeDate = dischargeDateP;
	patient.reponDoctor = reponDoctorP;
}
void billType::setDoctorFeeRatio(int doctorFeeRatioP)
{
	if(doctorFeeRatioP>0)
		doctorFeeRatio = doctorFeeRatioP;
}
void billType::setMedicFeePrice(int medicFeePriceP)
{
	if(MedicFeePriceP>0)
		MedicFeePrice = medicFeePriceP;
}
void billType::setMedicUnits(int medicUnitsP)
{
	if(medicUnitsP>0)
		MedicUnits = medicUnitsP;
}
int billType::getBill(void)
{
cout << "\tON_YOUR_WINGS HOSPITAL \n";
cout << "Patient ID: \t" 	<< patient.getPatientId() << endl;
cout << "Patient Name: \t" << patient.getName() << endl;
cout << "Date of Birth: \t" << patient.getDateOfBirth.printDate() << endl;
cout << "Hospitalized date: \t" << patient.getStartDate.printDate() << endl;
cout << "Discharged Date: \t" << patient.getDischargeDate.printDate() << endl;
cout << "Reponsible Doctor: \t" << patient.getDoctor.getName() << endl;
cout << "Doctor Charge:	\t"		<< doctorCharge << endl; //Need to be implemented
cout << "Medicine Unit: \t"	<< MedicUnits << endl;	
cout << "Medicine Price: \t" << MedicFeePrice << endl;
cout << "Total medicine charge: " << MedicUnits*MedicFeePrice << endl;
cout << "Total hospital charge: " << doctorCharge + MedicUnits*MedicFeePrice << endl;
cout << "Thank for using our service!"	<< endl;
}