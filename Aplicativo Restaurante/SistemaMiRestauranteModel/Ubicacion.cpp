#pragma once
#include "Ubicacion.h"

using namespace SistemaMiBusModel;

Ubicacion::Ubicacion(String^ direccion, String^ codigoPostal, String^ latitud, String^ longitud) {

	this->direccion = direccion;
	this->codigoPostal = codigoPostal;
	this->latitud = latitud;
	this->longitud = longitud;

}