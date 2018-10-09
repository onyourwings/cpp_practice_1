#ifndef BILLTYPE_H
#define BILLTYPE_H

#include "patientType.h"
#include "doctorType.h"
class billType
{
public:
	billType();
	billType(patientType patientP,  int MedicFeePriceP, int MedicUnitsP);
	void setPatient(patientType patientP);
	void setMedicFeePrice(int);
	void setMedicUnits(int);
	void getBill(void);


private:
	patientType patient;
	int doctorCharge;
	int MedicFeePrice;
	int MedicUnits;
	int calDoctorCharge();
};
#endif