#include "Complex.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int Complex::nbr = 0;
Complex::Complex()
{
	this->m_re = 0.0;
	this->m_im = 0.0;
	nbr++;
}

Complex::Complex(double x, double y)
{
	this->m_re = x;
	this->m_im = y;
	nbr++;
}

Complex::Complex(const Complex& Z)
{
	this->m_re = Z.m_re;
	this->m_im = Z.m_im;
	nbr++;
}

void Complex::m_print() const
{
	if (this->m_im >= 0)
		cout << this->m_re << "+i" << this->m_im << endl;
	else
		cout << this->m_re << "-i" << -this->m_im << endl;


}

double Complex::m_moudule() const
{
	double M;
	M = sqrt(pow(this->m_re, 2) + pow(this->m_im, 2));
	return M;
}

Complex Complex::m_conjuge() const
{
	Complex ZB = *this;
	ZB.m_im = -this->m_im;
	return ZB;
}

Complex Complex::operator+(const Complex& Z) const
{
	Complex ZS;
	ZS.m_re = this->m_re + Z.m_re;
	ZS.m_im = this->m_im + Z.m_im;
	return ZS;
}

Complex Complex::operator-(const Complex& Z) const
{
	Complex ZS;
	ZS.m_re = this->m_re - Z.m_re;
	ZS.m_im = this->m_im - Z.m_im;
	return ZS;
}

Complex Complex::operator+(double x) const
{
	Complex ZS=*this;
	ZS.m_re = this->m_re +x;
	return ZS;
}

int Complex::nbr_instans()
{
	return Complex::nbr;
}
