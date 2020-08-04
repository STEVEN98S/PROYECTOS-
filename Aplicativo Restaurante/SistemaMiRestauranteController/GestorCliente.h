#pragma once

namespace SistemaMiBusController
{
	using namespace System::Collections::Generic;
	using namespace SistemaMiBusModel;
	using namespace System;

	public ref class GestorCliente
	{

	private:
		List<Cliente^>^ listaClientes;


	public:
		GestorCliente();
		void AgregarCliente(Cliente^ objCliente);
		int  ObtenerCantidadCliente();
		Cliente^ ObtenerClienteUnaPosicion(int posicion);
		void EliminarCliente(int posicion);
		Cliente^ BuscarClientexDNI(String^ DNI);
		Cliente^ BuscarClientexNomrbe(String^ nombre);
		void GestorCliente::GrabarArchivo();
		void GestorCliente::CargarDesdeArchivo();

	};
}