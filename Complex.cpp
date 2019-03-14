#include <iostream>
#include <cmath>
#include <math.h>
#include "Complex.h"
using namespace std;

//Default constructor definition
Complex::Complex() { real = 0; imag = 0; }

//Explicit value constructor definition
Complex::Complex(double r, double i) { real = r; imag = i; }

//Delegating constructor definition (case of imaginary part == 0)
Complex::Complex(double r) : Complex(r, 0) {};

//Getter of the real part definition
double Complex::getR() const { return real; }

//Getter of the imaginary part definition
double Complex::getI() const { return imag; }

//Setter of the real part definition
void Complex::setR(const double r) { real = r; }

//Setter of the imaginary part definition
void Complex::setI(const double i) { imag = i; }

//Add function definition
Complex Complex::add(const Complex &n1, const Complex &n2)
{
	Complex result(n1.real + n2.real, n1.imag + n2.imag);
	return result;
}

//Subtract function definition
Complex Complex::subtract(const Complex &n1, const Complex &n2)
{
	Complex result(n1.real - n2.real, n1.imag - n2.imag);
	return result;
}

//Multiply function definition
Complex Complex::multiply(const Complex &n1, const Complex &n2)
{
	Complex result((n1.real * n2.real - n1.imag * n2.imag),
		           (n1.imag * n2.real + n1.real * n2.imag));
	return result;
}

//Division function definition
Complex Complex::divide(const Complex &n1, const Complex &n2)
{
	Complex result(((n1.real * n2.real + n1.imag * n2.imag) /
		             (pow(n2.real, 2) + pow(n2.imag, 2))),
		           ((n1.imag * n2.real - n1.real * n2.imag) /
		             (pow(n2.real, 2) + pow(n2.imag, 2))));
	return result;
}

//Absolute value function definition
double abs(const Complex &n)
{
	return sqrt(pow(n.getR(), 2) + pow(n.getI(), 2));
}

//Overload of << operator
ostream & operator << (ostream & out, const Complex &n)
{
	out << n.getR(); 
	if (n.getI() >= 0) 
	{
		out << " + ";
		if (n.getI() != 1) //output 1 + i instead 1 + 1i
			out << n.getI();
	}
	else if (n.getI() < 0)
	{
		if (n.getI() == -1) //output 1 - i instead of 1 - 1i
			out << "-";
		else
			out << n.getI();
	}
	out << "i";
	return out;
}

//Overload of >> operator
istream & operator >> (istream & in, Complex &n)
{
	char input;
	double r = 0;
	double i = 0;
	in >> r >> i >> input;
	n.setR(r);
	n.setI(i);
	return in;
}

//Overload of + operator
Complex operator + (const Complex &n1, const Complex &n2)
{
	Complex result; 
	return result.add(n1, n2);
}

//Overload of - operator
Complex operator - (const Complex &n1, const Complex &n2)
{
	Complex result;
	return result.subtract(n1, n2);
}

//Overload of * operator
Complex operator * (const Complex &n1, const Complex &n2)
{
	Complex result;
	return result.multiply(n1, n2);
}

//Overload of / operator
Complex operator / (const Complex &n1, const Complex &n2)
{
	Complex result;
	return result.divide(n1, n2);
}

//Overload of == operator
bool operator == (const Complex &n1, const Complex &n2)
{
	return ((n1.getR() == n2.getR()) && (n1.getI() == n2.getI()));
}