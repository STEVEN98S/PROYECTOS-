#pragma once

namespace ProyectoSemaforoModel
{
	using namespace System;

	public ref class Carril
	{
	public:
		String^ Sentido;
		int NumCarril;
	public:
		Carril(String^ Sentido, int NumCarril);
	};
}