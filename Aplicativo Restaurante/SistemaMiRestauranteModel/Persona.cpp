#include "Persona.h"

using namespace SistemaMiBusModel;


Persona::Persona(){

}

Persona::Persona(String^ Nombre, String^ ApellidoMaterno, String^ ApellidoPaterno, String^ NumDNI, String^ email, String^ Telefono, String^ Genero){


	this->Nombre = Nombre;
	this->ApellidoMaterno = ApellidoMaterno;
	this->ApellidoPaterno = ApellidoPaterno;
	this->NumDNI = NumDNI;
	this->email = email;
	this->Telefono = Telefono;
	this->Genero = Genero;

}