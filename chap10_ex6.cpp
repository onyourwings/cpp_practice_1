#include <iostream>
#include "romanType.h"

	


int main (void)
{
	int mode = 0;
	romanType num1;
	while(1)
	{
		cout << "Choose mode (0: int -> roman; 1 vv): ";
		cin >> mode;
		while (mode==0)
		{
			cout << endl << "Enter integer number input (< 3999): ";
			int intNum;
			cin >> intNum;
			if(intNum == 0)
					break;
			else
				num1.setIntNum(intNum);
		}

		while (mode == 1)
		{
			cout << endl << "Enter Roman number input: ";
			std::string romanstr;
			cin >> romanstr;
			if(romanstr=="0")
				break;
			else
				num1.setRomanNum(romanstr);
		}
		cout << endl;
	}
	return 0;


}