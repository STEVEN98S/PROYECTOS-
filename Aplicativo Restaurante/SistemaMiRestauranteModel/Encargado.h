
#include "Persona.h"

namespace SistemaMiBusModel
{
	using namespace System;
	public ref class Encargado : public Persona
	{
	public:

		String^ FechaIngreso;

	public:

		Encargado(String^ FechaIngreso, String^ Nombre, String^ ApellidoMaterno, String^ ApellidoPaterno, String^ NumDNI, String^ email, String^ Telefono, String^ Genero);
	};
}