#include "doctorType.h"
#include "patientType.h"
#include "billType.h"

int main (void)
{
	dateType date1, date2, date3;
	date1.setDate(2,3,2005);
	date2.setDate(4,6,1952);
	date3.setDate(5,3,2005);
	doctorType jack("Jack", "Stephen", "Surgeon", 52,3);
	patientType john ("John", "Locke", 1, 62,date1,date2, date3, jack);


	billType billmst01(john, 100, 5);

	billmst01.getBill();


	return 0;
}