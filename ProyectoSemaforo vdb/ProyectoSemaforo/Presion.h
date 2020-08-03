#pragma once
#include "Hardware.h"

namespace ProyectoSemaforoModel
{
	using namespace System;

	public ref class Presion :public Hardware
	{
	public: 
		int PesoSensado;
	public: 
		Presion(int PesoSensado, int codigo, String^ tipo);
	};
}