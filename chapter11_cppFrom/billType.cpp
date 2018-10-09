#include "billType.h"

billType::billType()
{
	doctorCharge= 0;
	MedicFeePrice = 1000;
	MedicUnits = 0;
}
billType::billType(patientType patientP, int medicFeePriceP, int medicUnitsP)
{
	patient = patientP;

	if(medicFeePriceP>0)
		MedicFeePrice = medicFeePriceP;
	else
		MedicFeePrice = 1000;
	if(medicUnitsP>0)
		MedicUnits = medicUnitsP;
	else
		MedicUnits = 0;
}
void billType::setPatient(patientType patientP)
{
patient = patientP;
}

void billType::setMedicFeePrice(int medicFeePriceP)
{
	if(medicFeePriceP>0)
		MedicFeePrice = medicFeePriceP;
}
void billType::setMedicUnits(int medicUnitsP)
{
	if(medicUnitsP>0)
		MedicUnits = medicUnitsP;
}
void billType::getBill(void)
{
cout << "\tON_YOUR_WINGS HOSPITAL \n";
cout << "Patient ID: \t" 	<< patient.getPatientId() << endl; 
cout << "Patient Name: \t" << patient.getName() << endl;
cout << "Date of Birth: \t" ; patient.getDateOfBirth() ; cout << endl;
cout << "Hospitalized date: \t" ; patient.getStartDate() ; cout << endl;
cout << "Discharged Date: \t" ; patient.getDischargeDate() ; cout << endl;
cout << "Reponsible Doctor: \t" ; patient.getDoctor() ; cout << endl;
cout << "Doctor Charge:	\t"		<< calDoctorCharge() << endl; //Need to be implemented
cout << "Medicine Unit: \t"	<< MedicUnits << endl;	
cout << "Medicine Price: \t" << MedicFeePrice << endl;
cout << "Total medicine charge: " << MedicUnits*MedicFeePrice << endl;
cout << "Total hospital charge: " << calDoctorCharge() + MedicUnits*MedicFeePrice << endl;
cout << "Thank for using our service!"	<< endl;
}

int billType::calDoctorCharge()
{
	return patient.getDoctorRatio() * 1500;
}