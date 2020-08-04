#include "Producto.h"

using namespace SistemaMiRestauranteModel;


Producto::Producto(String^ codigo, String^ nombre, String^ descripcion, String^ precio)
{
	this->codigo = codigo;
	this->nombre = nombre;
	this->descripcion = descripcion;
	this->precio = precio;

}