#include "Pedido.h"
#include "Reserva.h"
#include "Persona.h"

namespace SistemaMiBusModel
{

	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Cliente: public Persona
	{
	public:
		String^ NroClienteFre;
		List<Pedido^>^ listPedido;
		Reserva^ objReserva;

	public:
		Cliente();
		Cliente(String^ NroClienteFre, String^ Nombre, String^ ApellidoMaterno, String^ ApellidoPaterno, String^ NumDNI, String^ email, String^ Telefono, String^ Genero);
	};
}