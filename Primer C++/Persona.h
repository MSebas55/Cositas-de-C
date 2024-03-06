#pragma once
#include <string>
#include <iostream>

using namespace std;
class Persona
{
	private:
		string dni;
	protected:
		void hola();
	public: 
		Persona(string dni);
		~Persona();
		void sayDNI();
};

