#include "Reserva.h"

using namespace SistemaMiBusModel;

Reserva::Reserva()
{
	this->listPedido = gcnew List<Pedido^>();
}


Reserva::Reserva(String^ codigo, String^ fecha, String^ hora){

	this->listPedido = gcnew List<Pedido^>();

	this->codigo = codigo;
	this->fecha = fecha;
	this->hora = hora;
}
