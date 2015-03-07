
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

void Fraction::print() //displaying results
{
	int num1, num2;
	if (numR > numD) // Checking if it's a mixed fraction
	{
		num1 = numR / numD;
		num2 = numR % numD;
		cout << "answer is " << num1 << " " << num2 << "/" << numD << endl;
	}
	else if (numR == numD) // checking for equal deno and num to print result as integer
	{
		num1 = numR / numD;
		cout << "answer is " << num1 << endl;
	}
	else
	{
		cout << "answer is " << numR << "/" << numD;
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
