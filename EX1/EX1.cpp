// EX1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
    cout << "Hello World!\n";
    cout << "nbr objet :" << Complex::nbr_instans() << endl;
    Complex Z1; // appel de constructeur sans paramatére
    cout << "Z1= ";
    Z1.m_print();
    cout << "nbr objet :" << Complex::nbr_instans() << endl;
    Complex Z2(2.5,-5.9);// appel de constructeur avec paramétres
    cout << "Z2= ";
    Z2.m_print();
    cout << "nbr objet :" << Complex::nbr_instans() << endl;
    Complex Z3 = Z2; // appel de constructeur de recopie
    cout << "Z3= ";
    cout << "nbr objet :" << Complex::nbr_instans() << endl;
    Z3.m_print();
    cout << "module de Z2 =" << Z2.m_moudule() << endl;
    Complex Z4=Z2.m_conjuge() ;
    cout << "le conjuge de Z2:Z4= ";
    Z4.m_print();
    cout << "nbr objet :" << Complex::nbr_instans() << endl;
    Complex Z5(6.3, 4.8);
    cout << "Z5= ";
    Z5.m_print();
    cout << "nbr objet :" << Complex::nbr_instans() << endl;
    Complex ZS;
    ZS = Z2.operator+(Z5);//ZS=Z1+Z5
    cout << "Z5 + Z2 = ";
    ZS.m_print();
    ZS = Z2 - Z4;
    cout << "Z2 - Z4 = ";
    ZS.m_print();
    Complex Z6;
    Z6=Z6.operator+(10.5);
    cout << "Z6 + 10.5 = ";
    Z6.m_print();


   






}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
