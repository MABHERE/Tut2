#include <iostream>
using namespace std;

class Fraction
{
private:
	int numR, numD;
	int  GreatCOM(int, int);
public:
	Fraction(int N = 0, int D = 1); // constructor
	~Fraction(); // deconstuctor

	// getting the numerator & denominator
	int Getnumerator();
	int Getdenominator();

	// setting the numerator & denominator
	void Setnumerator(int num);
	void Setdenominator(int num);

	//Print function
	void print();


	friend istream & operator >> (istream &input, Fraction &frac); //Overloading the isertion stream
	friend ostream & operator << (ostream &output, Fraction &frac); //Overloading the extration stream

	Fraction add(Fraction add);
	Fraction subtract(Fraction subtract);
	Fraction multiply(Fraction multiply);
	Fraction division(Fraction division);
	

	Fraction operator+(Fraction add);
	Fraction operator-(Fraction subtract);
	Fraction operator*(Fraction multiply);
	Fraction operator/(Fraction division);

};




