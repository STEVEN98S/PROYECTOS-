#pragma once
#include "Producto.h"

namespace SistemaMiBusModel
{
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Pedido
	{
	private:
		String^ Cantidad;
		String^ NumeroDePedido;
		String^ Precio;
		String^ Especificacion;

		Producto^ objProducto;

	public:
		Pedido(String^ Cantidad, String^ NumeroDePedido, String^ Precio, String^ Especificacion,Producto^ objProducto);
	};
}
