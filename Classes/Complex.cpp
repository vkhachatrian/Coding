#include <iostream>
using namespace std;


class Complex
{
private:
	double realPart;
	double imaginaryPart;
public:
	Complex(); // default constructer
	Complex(double realPart, double imaginaryPart); // parametrizied constructer
	Complex add(Complex otherNumber); // sum of two complex numbers
	Complex subtract(Complex otherNumber); // deference of two complex numbers
	void setRealPart(double realPart); // setting the real part
	void setImaginaryPart(double imaginaryPart); // setting the imaginary part
	double getRealPart(); // returns the real part
	double getImaginaryPart(); // returns the imaginary part
	void printComplex();
};

Complex::Complex()
{
	realPart = 0;
	imaginaryPart = 0;
}

Complex::Complex(double realPart, double imaginaryPart)
{
	this->realPart = realPart;
	this->imaginaryPart = imaginaryPart;
}

Complex Complex::add(Complex otherNumber)
{
	Complex temp;
	double sum1 = this->realPart + otherNumber.realPart;
	double sum2 = this->imaginaryPart + otherNumber.imaginaryPart;
	temp.setRealPart(sum1);
	temp.setImaginaryPart(sum2);
	return temp;
}

Complex Complex::subtract(Complex otherNumber)
{
	Complex temp;
	double def1 = this->realPart - otherNumber.realPart;
	double def2 = this->imaginaryPart - otherNumber.imaginaryPart;
	temp.setRealPart(def1);
	temp.setImaginaryPart(def2);
	return temp;
}
void Complex::setRealPart(double realPart)
{
	this->realPart = realPart;
}

void Complex::setImaginaryPart(double imaginaryPart)
{
	this->imaginaryPart = imaginaryPart;
}
double Complex::getRealPart()
{
	return realPart;
}

double Complex::getImaginaryPart()
{
	return imaginaryPart;
}

void Complex::printComplex()
{
	cout << realPart << " : " << imaginaryPart << endl;
}

int main()
{
	Complex obj1(4, 4);
	Complex obj2(3.1, 3);
	Complex obj3;
	obj3 = obj1.add(obj2);
	obj3.printComplex();

	return 0;
}