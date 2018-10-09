#ifndef DATETYPE_H
#define DATETYPE_H

#include <iostream>
#include <string>

using namespace std;

class dateType
{
public:
	dateType();
	dateType(int, int, int);
	dateType(int, string, int);
	void setDate(int, int, int);
	void setDay(int);
	void setMonth(int);
	void setMonth(string);
	void setYear(int);
	void printDate(void) const;
	void getDate(int &, int &, int &) const;
	void getDate(int &, string &, int &) const;
	int getDay() const;
	int getMonth() const;
	void getMonth(string &) const;
	int getYear() const;
	~dateType();

private:
	int day;
	int month;
	string month_str;
	int year;
	bool checkMonthValid(string) const;
	void makeMonthStr();
	void makeMonthInt();

};


#endif