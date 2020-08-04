#include "Asiento.h"

using namespace SistemaMiBusModel;

Asiento::Asiento(int codigo, int numero, String^ tipo)
{
	this->codigo = codigo;
	this->numero = numero;
	this->tipo = tipo;
}