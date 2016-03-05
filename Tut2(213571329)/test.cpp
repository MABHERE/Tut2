#include<iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	int n1, n2, d1, d2;


/*	cout << "Please enter numerator of fraction 1" << endl;
	cin >> n1;
	cout << "Please enter denominator of fraction 1" << endl;
	cin >> d1;
	cout << "Please enter numerator of fraction 2" << endl;
	cin >> n2;
	cout << "Please enter denominator of fraction 2" << endl;
	cin >> d2; */

// getting the fractions from the user
	Fraction num1;
	Fraction num2;

// inserting fractions
	cout << "Please enter 1st fraction as ( A/B)" << endl;
	cin >> num1;
	cout << "Please enter 2nd fraction  as ( A/B)" << endl;
	cin >> num2;

	Fraction ans;
	ans= num1 + num2;   //testing addition
	cout << ans;

	ans = num1 - num2;  //testinng subtraction
	cout << ans;

	ans = num1*num2;//testing multiplication
	cout << ans;

	ans = num1 / num2;//testing division
	cout << ans;



	system("pause");
	return 0;
}
