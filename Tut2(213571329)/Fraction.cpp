
#include "Fraction.h"
#include<iostream>
using namespace std;
Fraction::Fraction(int N, int D)// constructor
{
	numR = N;
	numD = D;
};

int Fraction::Getnumerator()
{
	return numR;
};

int Fraction::Getdenominator()
{
	return numD;
};

void Fraction::Setdenominator(int num)
{
	numR = num;
};


void Fraction::Setnumerator(int num)
{
	numD = num;
};


Fraction Fraction::add(Fraction add)
{
	return Fraction(numR*add.numD + add.numR*numD, numD*add.numD);
};

Fraction Fraction::subtract(Fraction subtract)
{
	return Fraction(numR*subtract.numD - subtract.numR*numD, numD*subtract.numD);
};

Fraction Fraction::multiply(Fraction multiply)
{
	return Fraction(numR*multiply.numR, numD*multiply.numD);
};


Fraction Fraction::division(Fraction division)
{
	return Fraction(numR*division.numD, numD*division.numR);

};

int Fraction::GreatCOM(int numR, int numD)
{
	// Recursive form of getting the gcd of numerator and denominator
	if (numD == 0)
	{
		return numR;
	}
	else
	{
		return GreatCOM(numD, numR % numD);
	}
}

/*void Fraction::print() //displaying results
{
 int gcd = GreatCOM(numR,numD);

	int num1, num2;
		num1 = (numR /gcd) /(numD/gcd);
		num2 = numR % numD;

	if (numR > numD)
		{
				cout << "answer is " << num1 << " " << num2 << "/" << (numD/gcd) << endl;
		}
	else if (numR == numD) // checking for equal deno and num to print result as integer
		{
		cout << "answer is " << num1 << endl;
		}
	else if (numR ==0)
		{
		cout << "answer is 0" << endl;
		}
	else
		{
		cout << "answer is " << numR / gcd << "/" << numD / gcd << endl;
		}
};*/

Fraction Fraction::operator+(Fraction add)
{
	return Fraction(numR*add.numD + add.numR*numD, numD*add.numD);
};


Fraction Fraction::operator-(Fraction subtract)
{
	return Fraction(numR*subtract.numD - subtract.numR*numD, numD*subtract.numD);
};


Fraction Fraction::operator*(Fraction multiply)
{
	return Fraction(numR*multiply.numR, numD*multiply.numD);
};


Fraction Fraction::operator/(Fraction division)
{
	return Fraction(numR*division.numD, numD*division.numR);

};

// overloading insertion stream
istream &operator >> (istream &input, Fraction &frac)
{
	char Userslash;
	input >> frac.numR >> Userslash >> frac.numD ;

	return input;
}

//overloading the extration stream
ostream & operator << (ostream &output, Fraction &frac)
{
	int gcd = frac.GreatCOM(frac.numR, frac.numD);

	int num1, num2;
	num1 = (frac.numR / gcd) / (frac.numD / gcd); // extrating the integer part of the improper fraction
	num2 = frac.numR % frac.numD; // getting the remainder

	if (frac.numR > frac.numD) // checking for improper fraction
	{
		if (frac.numR % frac.numD == 0)
		{
			output << "answer is " << num1  << endl;
		}
		else
		{
			output << "answer is " << num1 << " " << num2 << "/" << (frac.numD / gcd) << endl;
		}
	}
	else if (frac.numR == frac.numD) // checking for equal deno and num to print result as integer
	{
		output << "answer is " << num1 << endl;
	}
	else if (frac.numR == 0)
	{
		output << "answer is 0" << endl;
	}
	else
	{
		output << "answer is " << frac.numR / gcd << "/" << frac.numD / gcd << endl;
	}

	return output;
}


Fraction::~Fraction() // deconstructor
{
	// do nothing
}
