#ifndef PATIENTTYPE_H
#define PATIENTTYPE_H

#include <iostream>
#include <string>

using namespace std;

class patientType : public personType
{
	public:

	private:
		int patientID;
		dateType startDate;
		dateType dateOfBirth;
		dateType dischargeDate;
		doctorType attenDoctor;
		

}