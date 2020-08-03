#pragma once

namespace ProyectoSemaforoModel
{
	using namespace System;

	public ref class Usuario
	{
	public:
		String ^ Nombre;
		String^ Apellido;
		int codigo;
	public:
		Usuario(String^ Nombre, String^ Apellido, int codigo);
	};
}