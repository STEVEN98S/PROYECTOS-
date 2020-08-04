#include "Cliente.h"

using namespace SistemaMiBusModel;

Cliente::Cliente()
{
	this->listPedido = gcnew List<Pedido^>();
	this->objReserva = gcnew Reserva();
}


Cliente::Cliente(String^ NroClienteFre, String^ Nombre, String^ ApellidoMaterno, String^ ApellidoPaterno, String^ NumDNI, String^ email, String^ Telefono, String^ Genero){
	
	this->listPedido = gcnew List<Pedido^>();
	this->objReserva = gcnew Reserva();
	
	this->NroClienteFre = NroClienteFre;
	this->Nombre = Nombre;
	this->ApellidoMaterno = ApellidoMaterno;
	this->ApellidoPaterno = ApellidoPaterno;
	this->NumDNI = NumDNI;
	this->email = email;
	this->Telefono = Telefono;
	this->Genero = Genero;
	

}
