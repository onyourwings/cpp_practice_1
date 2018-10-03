#ifndef BILLTYPE_H
#define BILLTYPE_H

class billType
{
public:
	billType();
	billType(patientType patientP, int doctorFeeRatioP, int MedicFeePriceP, int MedicUnitsP);
	void setPatient(string fristNameP, string lastNameP, int Id, int ageP, 
					dateType startDateP, dateType DateofBirthP , dateType dischargeDateP, doctorType reponDoctorP);
	void setDoctorFeeRatio(int);
	void setMedicFeePrice(int);
	void setMedicUnits(int);
	void getBill(void);

private:
	patientType patient;
	int doctorFeeRatio;
	int MedicFeePrice;
	int MedicUnits;
	//void calPrice
}
#endif