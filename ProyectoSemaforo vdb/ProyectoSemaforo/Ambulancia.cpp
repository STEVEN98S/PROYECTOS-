#include "Ambulancia.h"

using namespace ProyectoSemaforoModel;

Ambulancia::Ambulancia(String^ Placa, String^ Ruta, Usuario^ UsuarioAmb)
{
	this->Placa = Placa;
	this->Ruta = Ruta;
	this->UsuarioAmb = UsuarioAmb;
}