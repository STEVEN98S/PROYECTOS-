#include "Encargado.h"

using namespace SistemaMiBusModel;

Encargado::Encargado(String^ FechaIngreso, String^ Nombre, String^ ApellidoMaterno, String^ ApellidoPaterno, String^ NumDNI, String^ email, String^ Telefono, String^ Genero){

	this->FechaIngreso = FechaIngreso;
	this->Nombre = Nombre;
	this->ApellidoMaterno = ApellidoMaterno;
	this->ApellidoPaterno = ApellidoPaterno;
	this->NumDNI = NumDNI;
	this->email = email;
	this->Telefono = Telefono;
	this->Genero = Genero;
};
