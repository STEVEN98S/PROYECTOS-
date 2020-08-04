#pragma once
#include "Pedido.h"


namespace SistemaMiBusModel
{

	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Reserva
	{
	private:
		String^ codigo;
		String^ fecha;
		String^ hora;


		List<Pedido^>^ listPedido;

	public:
		Reserva();
		Reserva(String^ codigo, String^ fecha, String^ hora);

	};
}