#pragma once
#include "Asiento.h"

namespace SistemaMiBusModel
{
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Bus
	{
	public:
		int codigo;
		String^ placa;
		String^ tipo;
		int cantidadPasajeros;
		double capacidadEquipaje;
		List<Asiento^>^ listaAsientos;

	public:
		Bus(int codigo, String^ placa, String^ tipo, int cantidadPasajeros, double capacidadEquipaje, List<Asiento^>^ listaAsientos);
	};
}