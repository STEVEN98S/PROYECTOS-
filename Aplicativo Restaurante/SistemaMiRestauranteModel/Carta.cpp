#include "Carta.h"

using namespace SistemaMiRestauranteModel;

Carta::Carta(String^ codigo, String^ FechaValidez, String^ Nombre,String^ estado, List<Producto^>^ listaProductos)

{
	
	this->codigo = codigo;
	this->FechaValidez = FechaValidez;
	this->Nombre = Nombre;
	this->estado = estado;
	this->listaProductos = listaProductos;

}

