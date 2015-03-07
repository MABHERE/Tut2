#pragma once
#pragma once
class Fraction
{

private:
	int numR, numD;
public:
	Fraction(int N = 0, int D = 1); // constructor
	~Fraction(); // deconstuctor

	// getting the numerator & denominator
	int Gnumerator();
	int Gdenominator();

	// setting the numerator & denominator
	void Snumerator(int num);
	void Sdenominator(int num);



	Fraction add(Fraction add);
	Fraction subtract(Fraction subtract);
	Fraction multiply(Fraction multiply);
	Fraction division(Fraction division);

	Fraction operator+(Fraction add);
	Fraction operator-(Fraction subtract);
	Fraction operator*(Fraction multiply);
	Fraction operator/(Fraction division);
	void print();
};




