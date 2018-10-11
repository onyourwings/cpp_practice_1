#ifndef PATIENTTYPE_H
#define PATIENTTYPE_H

#include <iostream>
#include <string>
#include "personType.h"
#include "dateType.h"
#include "doctorType.h"
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

			int getPatientId(void) const;
			void getStartDate(void) const;
			void getDateOfBirth(void) const; 
			void getDischargeDate(void) const;
			void getDoctor(void) const;
			int getDoctorRatio(void) 
				{
					return reponDoctor.getFeeRatio();
				}

			~patientType();
	private:
		int patientID;
		dateType startDate;
		dateType dateOfBirth;
		dateType dischargeDate;
		doctorType reponDoctor;


};

#endif