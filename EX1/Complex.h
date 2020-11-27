#pragma once
class Complex
{
//atributs
private:
	double m_re;
	double m_im;
	static int nbr;
//Méthodes
public:
	Complex();//constructeur sans paramétres
	Complex(double, double);//constructeur avec paramétres
	Complex(const Complex& Z);//constructeur de recopie
	void m_print()const;//affichage
	double m_moudule()const; //le module de Z
	Complex m_conjuge()const; //le conjugué
	// surcharge des operateures
	Complex operator+(const Complex& Z)const;
	Complex operator-(const Complex& Z)const;
	Complex operator+(double)const;
	static int nbr_instans();


};

