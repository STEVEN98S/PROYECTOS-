#include "Pedido.h"

using namespace SistemaMiBusModel;


Pedido::Pedido(String^ Cantidad, String^ NumeroDePedido, String^ Precio, String^ Especificacion, Producto^ objProducto)
{
	this->objProducto = objProducto;
	this->Cantidad = Cantidad;
	this->NumeroDePedido = NumeroDePedido;
	this->Precio = Precio;
	this->Especificacion = Especificacion;

}
	