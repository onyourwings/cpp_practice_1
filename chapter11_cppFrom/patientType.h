#ifndef PATIENTTYPE_H
#define PATIENTTYPE_H

#include <iostream>
#include <string>

using namespace std;

class patientType : public personType
{
	public:
			patientType();
			patientType(string, string, int, int, dateType, dateType, dateType, doctorType);
			patientType(string, string, int, dateType, dateType, doctorType);
			patientType(int, doctorType);
			void setPatientID(int);
			void setStartDate(dateType);
			void setDateOfBirth(dateType);
			void setDischargeDate(dateType);
			void setAttenDoctor(doctorType);

			int getPatientID(void) const;
			dateType getStartDate(void) const;
			dateType getDateOfBirth(void) const;
			dateType getDischargeDate(void) const;
			doctorType getDoctor(void) const;

			~patientType();
	private:
		int patientID;
		dateType startDate;
		dateType dateOfBirth;
		dateType dischargeDate;
		doctorType reponDoctor;


}

#endif