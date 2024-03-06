#include "Persona.h"

void Persona::hola()
{
	cout << "hola\n";
}

Persona::Persona(string dni) //dni(dni) {} // forma buena buena
{
	this->dni = dni;
}

Persona::~Persona()
{
	cout << "me muero\n";
}

void Persona::sayDNI()
{
	hola();
	cout << dni;
}
