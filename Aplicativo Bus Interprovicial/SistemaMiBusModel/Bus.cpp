#include "Bus.h"

using namespace SistemaMiBusModel;

Bus::Bus(int codigo, String^ placa, String^ tipo, int cantidadPasajeros, double capacidadEquipaje, List<Asiento^>^ listaAsientos)
{
	this->codigo = codigo;
	this->placa = placa;
	this->cantidadPasajeros = cantidadPasajeros;
	this->capacidadEquipaje = capacidadEquipaje;
	this->listaAsientos = listaAsientos;
}