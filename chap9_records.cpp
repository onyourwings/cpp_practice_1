#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

typedef struct computerStruct
{
	int 	computerID;
	string 	manufacture;
	string 	model;
	string 	processor;
	int 	ram;
	int 	hddsize;
	int 	builtyear;
	double	price;
} computerType;


void printComputer(computerType *computer);


int main(int argc, char const *argv[])
{
	computerType *computer1 = new computerType;
	computer1->computerID 	= 1;
	computer1->manufacture 	= "Dell Inc";
	computer1->model		= "Insprion 15 3537";
	computer1->processor	= "Intel i5 4200U";
	computer1->ram			= 6;
	computer1->hddsize		= 700;
	computer1->builtyear	= 2013;
	computer1->price		= 1200;


	int inputch = 0;
	cout << "Enter computer ID: " ;

	while (inputch == 0)
		cin >> inputch;
	
	if(inputch==1)
	{
		printComputer(computer1);
	}
	else
	 cout << "Computer ID does not exist." << '\n';

	cout << "Press any key to continue... \n" ;
	char c;
	c = getchar();
	delete computer1;

	return 0;
}

void printComputer(computerType *computer)
{
	cout << endl << "Computer number: 	\t" << computer->computerID << '\n' ;
	cout << "Manufacture: 	\t" << computer->manufacture << '\n';
	cout << "Model: 	\t" << computer->model << '\n';
	cout << "processor: 	\t" << computer->processor << '\n';
	cout << "Memory: 	\t" << computer->ram << '\n';
	cout << "HDD Size: 	\t" << computer->hddsize << '\n';
	cout << "Built Year: 	\t" << computer->builtyear << '\n';
	cout << "Price: 	\t" << computer->price << '\n';
}