#include<iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	int n1, n2, d1, d2;
	// getting the fractions from the user
	cout << "Please enter numerator of fraction 1" << endl;
	cin >> n1;
	cout << "Please enter denominator of fraction 1" << endl;
	cin >> d1;
	cout << "Please enter numerator of fraction 2" << endl;
	cin >> n2;
	cout << "Please enter denominator of fraction 2" << endl;
	cin >> d2;

	Fraction num1(n1, d1);
	Fraction num2(n2, d2);
	Fraction ans = num1 + num2;
	ans.print();
	system("pause");
	return 0;
}
