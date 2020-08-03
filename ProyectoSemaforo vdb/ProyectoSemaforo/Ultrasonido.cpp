#include "Ultrasonido.h"

using namespace ProyectoSemaforoModel;

Ultrasonido::Ultrasonido(int DistanciaMedida, int codigo, String^ tipo):Hardware(codigo, tipo)
{
	this->DistanciaMedida = DistanciaMedida;
	this->codigo = codigo;
	this->tipo = tipo;
}