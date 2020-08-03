#pragma once
#include "Hardware.h"

namespace ProyectoSemaforoModel
{
	using namespace System;

	public ref class Buzzer:public Hardware
	{
	public:
		int tiempo;
		int frecuencia;
	public:
		Buzzer(int tiempo, int frecuencia, int codigo, String^ tipo);
	};
}