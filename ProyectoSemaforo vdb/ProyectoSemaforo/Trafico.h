#pragma once

namespace ProyectoSemaforoModel
{
	using namespace System;

	public ref class Trafico
	{
	public:
		String^ Hora;
		int Densidad;
	public:
		Trafico(String^ Hora, int Densidad);
	};
}