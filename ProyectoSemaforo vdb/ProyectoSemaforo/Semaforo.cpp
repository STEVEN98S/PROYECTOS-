#include "Semaforo.h"

using namespace ProyectoSemaforoModel;

Semaforo::Semaforo(int codigo, String^ cuadra, List<LED^>^ ListaLEDs)
{
	this->codigo = codigo;
	this->cuadra = cuadra;
	this->ListaLEDs = ListaLEDs;
}