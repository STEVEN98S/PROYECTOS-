#pragma once
#include "Hardware.h"

namespace ProyectoSemaforoModel
{
	using namespace System;

	public ref class Ultrasonido : public Hardware
	{
	public:
		int DistanciaMedida;
	public:
		Ultrasonido(int DistanciaMedida, int codigo, String^ tipo);
	};
}