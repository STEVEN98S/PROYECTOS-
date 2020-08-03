#include "Usuario.h"

using namespace ProyectoSemaforoModel;

Usuario::Usuario(String^ Nombre, String^ Apellido, int codigo)
{
	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->codigo = codigo;
}