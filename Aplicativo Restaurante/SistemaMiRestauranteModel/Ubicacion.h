#pragma once
#pragma once
namespace SistemaMiBusModel
{
	using namespace System;
	public ref class Ubicacion
	{
	public:
		String^ direccion;
		String^ codigoPostal;
		String^ latitud;
		String^ longitud;
	public:
		Ubicacion(String^ direccion, String^ codigoPostal, String^ latitud, String^ longitud);
	};
}
