#pragma once
#include "LED.h"

namespace ProyectoSemaforoModel
{
	using namespace System;
	using namespace System::Collections::Generic;
	[Serializable]
	public ref class Semaforo
	{
	public:
		int codigo;
		String^ cuadra;
		List<LED^>^ ListaLEDs;
	public:
		Semaforo(int codigo, String^ cuadra, List<LED^>^ ListaLEDs);
	};
}