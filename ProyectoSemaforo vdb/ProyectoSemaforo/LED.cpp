#include "LED.h"

using namespace ProyectoSemaforoModel;

LED::LED(String^ color, int tiempo, int codigo, String^ tipo) :Hardware(codigo, tipo)
{
	this->color = color;
	this->tiempo = tiempo;
	this->codigo = codigo;
	this->tipo = tipo;
}