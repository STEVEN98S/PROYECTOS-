#pragma once
#include "Semaforo.h"
#include "Trafico.h"
#include "Carril.h"

namespace ProyectoSemaforoModel
{
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Cuadra
	{
	public:
		int NumCuadra;
		String^ Jerarquia;
		Semaforo^ SemaforoCuadra;
		List<Carril^>^ ListaCarriles;
		Trafico^ TraficoCuadra;
	public:
		Cuadra(int NumCuadra, String^ Jerarquia, Semaforo^ SemaforoCuadra, List<Carril^>^ ListaCarriles, Trafico^ TraficoCuadra);
	};
}