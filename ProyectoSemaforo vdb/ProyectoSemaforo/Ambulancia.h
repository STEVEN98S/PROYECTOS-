#pragma once
#include "Usuario.h"
namespace ProyectoSemaforoModel
{
	using namespace System;

	public ref class Ambulancia
	{
	public:
		String ^ Placa;
		String^ Ruta;
		Usuario^ UsuarioAmb;
	public:
		Ambulancia(String^ Placa, String^ Ruta, Usuario^ UsuarioAmb);
	};
}