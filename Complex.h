/*--Complex.h-------------------------------------------------------------------
A header file for Complex class that implements complex numbers

Operations are:
	getR():     Returns real part of complex number
	getI():     Returns imaginary part of complex number
	setR():     Sets real part of complex number
	setI():	    Sets imaginary part of complex number
	add():      Adds two complex numbers
	subtract(): Subtracts one complex number from another
	multiply(): Multiplies two complex numbers
	divide():   Divides two complex numbers
	<< :        Insertion operator overloaded for Complex objects
	>> :        Extraction operator overloaded for Complex objects
	+  :        Addition operator overloaded for Complex objects
	-  :	    Subtraction operator overloaded for Complex objects
	*  :        Multiplication operator overloaded for Complex objects
	/  :        Division operator overloaded for Complex objects
	== :	    Relational operator overloaded for Complex objects
	abs():      Absolute value of Complex number

Written by: Pavel Saladkou			
Written for: CSCI 1107				Mar. 13, 2019
------------------------------------------------------------------------------*/
#pragma once
#include <iostream>
using namespace std;

class Complex
{
private:
	double real;
	double imag;
public:
	//Default constructor
	Complex();
	//Explicit constructor
	Complex (double r, double i);
	//Delegating constructor if the imaginary part is 0 (n + 0i)
	Complex (double r);

	/*--------------------------------------------------------------------------
	 Name: getR()
	 Returns real part of the complex number

	 Precondition:  n is a valid Complex object
	 Postcondition: the real part of the complex number has been returned
	--------------------------------------------------------------------------*/
	double getR() const;
	/*--------------------------------------------------------------------------
	 Name: getI()
	 Returns imaginary part of the complex number

	 Precondition:  n is a valid Complex object
	 Postcondition: the imaginary part of the complex number has been returned
	--------------------------------------------------------------------------*/
	double getI() const;
	/*--------------------------------------------------------------------------
	 Name: setR()
	 Sets real part of the complex number

	 Precondition:  n is a valid Complex object
	 Postcondition: the real part of the complex number has been set to the 
		        constant value passed as a parameter
	--------------------------------------------------------------------------*/
	void setR (const double);
	/*--------------------------------------------------------------------------
         Name: setI()
         Sets imaginary part of the complex number

         Precondition:  n is a valid Complex object
	 Postcondition: the imaginary part of the complex number has been set to the
		        constant value passed as a parameter
    --------------------------------------------------------------------------*/
	void setI (const double);
	/*--------------------------------------------------------------------------
	 Name: add()
	 Adds two complex numbers

	 Precondition:  n1, n2 are valid Complex object
	 Postcondition: the sum of n1 and n2 has been returned
	--------------------------------------------------------------------------*/
	Complex add (const Complex &n1, const Complex &n2);
	/*--------------------------------------------------------------------------
	 Name: subtract()
	 Subtracts one complex number from another

	 Precondition:  n1, n2 are valid Complex object
	 Postcondition: the difference of n1 and n2 has been returned
	--------------------------------------------------------------------------*/
	Complex subtract (const Complex &n1, const Complex &n2);
	/*--------------------------------------------------------------------------
	 Name: multiply()
	 Multiplies two complex numbers

	 Precondition:  n1, n2 are valid Complex object
	 Postcondition: the multiplicand of n1 and n2 has been returned
	--------------------------------------------------------------------------*/
	Complex multiply (const Complex &n1, const Complex &n2);
	/*--------------------------------------------------------------------------
	 Name: divide()
	 Divides two complex numbers

	 Precondition:  n1, n2 are valid Complex object
	 Postcondition: the quotient of n1 / n2 has been returned
	--------------------------------------------------------------------------*/
	Complex divide (const Complex &n1, const Complex &n2);
};

/*------------------------------------------------------------------------------
 Name: operator << ()
 Insertion operator overloaded for Complex objects

 Precondition:  n is a valid Complex object
 Postcondition: the number has been inserted into the output stream
------------------------------------------------------------------------------*/
ostream & operator << (ostream & out, const Complex &n);
/*------------------------------------------------------------------------------
 Name: operator >> ()
 Extraction operator overloaded for Complex objects

 Precondition:  n is a valid Complex object
 Postcondition: the number has been extracted from the input stream
------------------------------------------------------------------------------*/
istream & operator >> (istream &in, Complex &n);
/*------------------------------------------------------------------------------
 Name: operator +()
 Addition operator overloaded for Complex objects

 Precondition:  n1, n2 are valid Complex object
 Postcondition: the sum of n1 and n2 has been returned
------------------------------------------------------------------------------*/
Complex operator + (const Complex &n1, const Complex &n2);
/*------------------------------------------------------------------------------
 Name: operator -()
 Subtraction operator overloaded for Complex objects

 Precondition:  n1, n2 are valid Complex object
 Postcondition: the difference of n1 and n2 has been returned
------------------------------------------------------------------------------*/
Complex operator - (const Complex &n1, const Complex &n2);
/*------------------------------------------------------------------------------
 Name: operator *()
 Multiplication operator overloaded for Complex objects

 Precondition:  n1, n2 are valid Complex object
 Postcondition: the multiplicand of n1 and n2 has been returned
------------------------------------------------------------------------------*/
Complex operator * (const Complex &n1, const Complex &n2);
/*------------------------------------------------------------------------------
 Name: operator /()
 Division operator overloaded for Complex objects

 Precondition:  n1, n2 are valid Complex object
 Postcondition: the dividend of n1 / n2 has been returned
------------------------------------------------------------------------------*/
Complex operator / (const Complex &n1, const Complex &n2);
/*------------------------------------------------------------------------------
 Name: operator ==()
 Equality operator overloaded for Complex objects

 Precondition:  n1, n2 are valid Complex object
 Postcondition: if n1 == n2 true has been returned
                if n1 != n2 false has been returned
------------------------------------------------------------------------------*/
bool operator == (const Complex &n1, const Complex &n2);
/*------------------------------------------------------------------------------
 Name: abs()
 Absolute value function overloaded for Complex objects

 Precondition:  n is valid Complex object
 Postcondition: the absolute value of n has been returned
------------------------------------------------------------------------------*/
double abs(const Complex &n);
