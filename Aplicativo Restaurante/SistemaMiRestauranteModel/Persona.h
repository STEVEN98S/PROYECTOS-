
namespace SistemaMiBusModel
{

	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Persona
	{
	public:
		String^ Nombre;
		String^ ApellidoMaterno;
		String^ ApellidoPaterno;
		String^ NumDNI;
		String^ email;
		String^ Telefono;
		String^ Genero;



	public:
		Persona();
		Persona(String^ Nombre, String^ ApellidoMaterno, String^ ApellidoPaterno, String^ NumDNI, String^ email, String^ Telefono, String^ Genero);
	};
}