#include "romanType.h"

romanType::romanType()
{
	intNum = 1;
	romanNum = "I";
}
romanType::romanType(std::string romanNumP)
{
	if(romanNumP != "")
		romanNum = romanNumP;
	else 
		{
		cout << "Error!" << endl;
		romanNum = "I";
		} 
	cvtRoman2Int();
	cout << "Integer Number is : " << getIntNum() << endl;
}
romanType::romanType(int intNumP)
{
	if(intNumP<4000)
		intNum = intNumP;
	else
	{
		cout << "Error!, not support number lager than 3999" << endl;
		intNum = 0;
	}
	cvtInt2Roman();
	cout << "Roman Number is : " << getRomanNum() << endl;
}

void romanType::setRomanNum (std::string romanNumP)
{
	romanNum = romanNumP;
	cvtRoman2Int();
	cout << "Integer Number is : " << getIntNum() << endl;
}

void romanType::setIntNum(int intNumP)
{
	if(intNumP<4000)
		intNum = intNumP;
	else
	{
		cout << "Error!, not support number lager than 3999" << endl;
		intNum = 0;
	}

	cvtInt2Roman();
	cout << "Roman Number is : " << getRomanNum() << endl;
}

int romanType::getIntNum(void)
{
	return intNum;
}

std::string romanType::getRomanNum(void)
{
	return romanNum;
}

romanType::~romanType()
{

}

void romanType::cvtRoman2Int()
{
	intNum = 0;
	bool trnsf = true;
	int buffnum1 = 0;
	int buffnum2 = 0;

	std::string::iterator it = romanNum.begin();
	while (it != romanNum.end())
	{
		if(trnsf)
			buffnum1 = cvtSingleRoman(*it);
		intNum += buffnum1;
		it++;
		if(it==romanNum.end())
			break;
		else
		{
			buffnum2 = buffnum1;
			buffnum1 = cvtSingleRoman(*it);
			if(buffnum1>buffnum2)
			{
				intNum += buffnum1 - 2*buffnum2;
				it++;
				trnsf = true;
			}
			else
				trnsf = false;
				
				
		}
	}
}

void romanType::cvtInt2Roman(void)
{
	romanNum.clear();
	int numTh = intNum / 1000;
	int remain = intNum % 1000;
	int numHu = remain /100;
	remain = remain % 100;
	int numTe = remain / 10;
	int unit = remain % 10;

	romanNum += cvtSingleInt(numTh, 3);
	romanNum += cvtSingleInt(numHu, 2);
	romanNum += cvtSingleInt(numTe, 1);
	romanNum += cvtSingleInt(unit, 0);
	//cout << numTh << "  " <<numHu << "  " <<numTe << "  " <<unit << "  " <<endl;
}

int romanType::cvtSingleRoman(char romanCh)
{
	switch(romanCh)
		{
		case 'm':
		case 'M': return 1000;
		case 'd':
		case 'D': return 500;
		case 'c':
		case 'C': return 100;
		case 'l':
		case 'L': return 50;
		case 'x':
		case 'X': return 10;
		case 'v':
		case 'V': return 5;
		case 'i':
		case 'I': return 1;
		default: 
			{
				cout << romanCh << " character is an invalid Roman numberal, ignored" << '\n';
				return 0;
			}
		}
}

std::string romanType::cvtSingleInt(int intN, int lev)
{
	if(lev == 0)
	switch(intN)
		{
			case 1: return "I";
			case 2: return "II";
			case 3: return "III";
			case 4: return "IV";
			case 5: return "V";
			case 6: return "VI";
			case 7: return "VII";
			case 8: return "VIII";
			case 9: return "IX";
			default: return "";	
		}
	else if( lev == 1)
		switch(intN)
		{
			case 1: return "X";
			case 2: return "XX";
			case 3: return "XXX";
			case 4: return "XL";
			case 5: return "L";
			case 6: return "LX";
			case 7: return "LXX";
			case 8: return "LXXX";
			case 9: return "XC";
			default: return "";	
		}
	else if( lev == 2)
		switch(intN)
		{
			case 1: return "C";
			case 2: return "CC";
			case 3: return "CCC";
			case 4: return "CD";
			case 5: return "D";
			case 6: return "DC";
			case 7: return "DCC";
			case 8: return "DCCC";
			case 9: return "CM";
			default: return "";	
		}
	else
		switch(intN)
		{
			case 1: return "M";
			case 2: return "MM";
			case 3: return "MMM";
			default: return "";	
		}

}