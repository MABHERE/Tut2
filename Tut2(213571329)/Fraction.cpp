
#include "Fraction.h"
#include<iostream>
using namespace std;
Fraction::Fraction(int N, int D)// constructor
{
	numR = N;
	numD = D;
};

int Fraction::Gnumerator()
{
	return numR;
};

int Fraction::Gdenominator()
{
	return numD;
};

void Fraction::Sdenominator(int num)
{
	numR = num;
};


void Fraction::Snumerator(int num)
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

void Fraction::print() //displaying results
{
 int gcd = GreatCOM(numR,numD);

	int num1, num2;
	if (numR > numD) // Checking if it's a mixed fraction
	{
		num1 = (numR /gcd) /(numD/gcd);
		num2 = numR % numD;
		cout << "answer is " << num1 << " " << num2 << "/" << (numD/gcd) << endl;
	}
	else if (numR == numD) // checking for equal deno and num to print result as integer
	{
		num1 = (numR /gcd)/ (numD/gcd);
		cout << "answer is " << num1 << endl;
	}
	else
	{
		cout << "answer is " << numR/gcd << "/" << numD/gcd;
	}
};

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



Fraction::~Fraction() // deconstructor
{
}
