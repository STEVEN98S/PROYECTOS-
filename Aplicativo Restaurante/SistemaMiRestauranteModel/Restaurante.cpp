#include "Restaurante.h"

using namespace SistemaMiBusModel;


/*Restaurante::Restaurante()
{
	//this->UbicacionRestaurante = gcnew Ubicacion();
	//this->objEncargado = gcnew Encargado();
}*/

Restaurante::Restaurante(String^ codigo, String^ nombre, String^ telefono, String^ descripcion, String^ email, Ubicacion^ objUbicacion){

	this->UbicacionRestaurante = objUbicacion;
	//this->objEncargado = gcnew Encargado();

	this->codigo = codigo;
	this->nombre = nombre;
	this->telefono = telefono;
	this->descripcion = descripcion;
	this->email = email;

}
