#include "Buzzer.h"

using namespace ProyectoSemaforoModel;

Buzzer::Buzzer(int tiempo, int frecuencia, int codigo, String^ tipo):Hardware(codigo, tipo)
{
	this->tiempo = tiempo;
	this->frecuencia = frecuencia;
	this->codigo = codigo;
	this->tipo = tipo;
}