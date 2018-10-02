#include "dateType.h"

dateType::dateType()
{
	day = 1;
	month = 1;
	year = 1960;
	month_str = "Jan";
}

dateType::dateType(int dayP, int monthP, int yearP)
{
	if(dayP > 0 && dayP < 32)
		day = dayP;
	else
	{
		day = 1;
		cout << "Invalid day!" << endl;
	}
	
	if(monthP>0 && monthP<13)
	{
		month = monthP;
		makeMonthStr();
	}
	else
	{
		month = 1;
		month_str = "Jan";
		cout << "Invalid month!" << endl;
	}

	if(yearP > 0)
		year = yearP;
}

dateType::dateType(int dayP, string month_strP, int yearP)
{
	if(dayP > 0 && dayP < 32)
		day = dayP;
	else
	{
		day = 1;
		cout << "Invalid day!" << endl;
	}

	if(checkMonthValid(month_strP))
	{
		month_str = month_strP;
		makeMonthInt();
	}
	else
	{
		month = 1;
		month_str = "Jan";
		cout << "Invalid month!" << endl;
	}

	if(yearP > 0)
		year = yearP;
}

void dateType::setDay(int dayP)
{
	if(dayP > 0 && dayP < 32)
		day = dayP;
	else
	{
		cout << "Invalid day!" << endl;
	}
}

void dateType::setMonth(int monthP)
{
	if(monthP>0 && monthP<13)
	{
		month = monthP;
		makeMonthStr();
	}
	else
	{
		cout << "Invalid month!" << endl;
	}

}

void dateType::setMonth(string month_strP)
{
	if(checkMonthValid(month_strP))
	{
		month_str = month_strP;
		makeMonthInt();
	}
	else
	{
		cout << "Invalid month!" << endl;
	}

}

void dateType::setYear(int yearP)
{
	if(yearP>0)
		year = yearP;
	else 
		cout << "Invalid year! " << endl;
}

void dateType::printDate() const
{
	cout << day << " - " << month_str << " - " << year ;
}


void dateType::getDate(int & dayR, int &monthR, int &yearR) const
{
	dayR = day;
	monthR = month;
	yearR = year;
}
void dateType::getDate(int & dayR, string &monthR, int &yearR) const
{
	dayR = day;
	monthR = month_str;
	yearR = year;
}

int dateType::getDay() const
{
	return day;
}

int dateType::getMonth() const
{
	return month;
}

int dateType::getDay() const
{
	return year;
}

void dateType::getMonth(string &monthR) const
{
	monthR = month_str;
}

dateType::~dateType()
{

}

bool dateType::checkMonthValid(string month_strP) const
{
	if (month_strP == "Jan" ||
		month_strP == "Feb" ||
		month_strP == "Mar" ||
		month_strP == "Apr" ||
		month_strP == "May" ||
		month_strP == "Jun" ||
		month_strP == "Jul" ||
		month_strP == "Aug" ||
		month_strP == "Sep" ||
		month_strP == "Oct" ||
		month_strP == "Nov" ||
		month_strP == "Dec" ||)
		return true;
	else
		return false;
}

void dateType::makeMonthStr()
{
	switch(month)
	{
		case 1:  {month_str = "Jan"; break;}
		case 2:  {month_str = "Feb"; break;}
		case 3:  {month_str = "Mar"; break;}
		case 4:  {month_str = "Apr"; break;}
		case 5:  {month_str = "May"; break;}
		case 6:  {month_str = "Jun"; break;}
		case 7:  {month_str = "Jul"; break;}
		case 8:  {month_str = "Aug"; break;}
		case 9:  {month_str = "Sep"; break;}
		case 10:  {month_str = "Oct"; break;}
		case 11:  {month_str = "Nov"; break;}
		case 12:  {month_str = "Dec"; break;}
		default: month_str = "Invalid";
	}
}

void dateType::makeMonthInt() 
{
	switch(month_str)
	{
		case "Jan" : {month = 1; break;}
		case "Feb" : {month = 2; break;}
		case "Mar" : {month = 3; break;}
		case "Apr" : {month = 4; break;}
		case "May" : {month = 5; break;}
		case "Jun" : {month = 6; break;}
		case "Jul" : {month = 7; break;}
		case "Aug" : {month = 8; break;}
		case "Sep" : {month = 9; break;}
		case "Oct" : {month = 10; break;}
		case "Nov" : {month = 11; break;}
		case "Dec" : {month = 12; break;}
		default: month = 1;
			
	}
}