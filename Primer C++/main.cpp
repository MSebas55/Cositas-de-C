#include <iostream>
#include <string>
#include "Persona.h"

using namespace std;
int main() {
	string dni;
	cout << "Introduzca su dni: \n";
	cin >> dni;

	/*Persona p0(dni);
	p0.sayDNI();*/
	Persona* p1 = new Persona(dni);
	p1->sayDNI();
	delete p1;

	return 0;
}