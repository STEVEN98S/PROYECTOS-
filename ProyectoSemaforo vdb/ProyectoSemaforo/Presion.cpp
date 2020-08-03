#include "Presion.h"

using namespace ProyectoSemaforoModel;

Presion::Presion(int PesoSensado, int codigo, String^ tipo) :Hardware(codigo, tipo)
{
	this->PesoSensado = PesoSensado;
	this->codigo = codigo;
	this->tipo = tipo;
}