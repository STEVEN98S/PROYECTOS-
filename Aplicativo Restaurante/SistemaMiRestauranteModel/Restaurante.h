#pragma once
#include "Ubicacion.h"
//#include "Encargado.h"

namespace SistemaMiBusModel
{
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Restaurante
	{
	public:
		String^ codigo;
		String^ nombre;
		String^ telefono;
		String^ descripcion;
		String^ email;

		Ubicacion^ UbicacionRestaurante;
	//	Encargado^ objEncargado;
		
	public:
		//Restaurante();
		Restaurante(String^ codigo, String^ nombre, String^ telefono, String^ descripcion, String^ email, Ubicacion^ objUbicacion);

	};
}