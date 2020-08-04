#pragma once

namespace SistemaMiBusController
{
	using namespace System::Collections::Generic;
	using namespace SistemaMiBusModel;
	using namespace System;

	public ref class GestorEncargado
	{

	private:
		List<Encargado^>^ listaEncargados;


	public:
		GestorEncargado();
		void AgregarEncargado(Encargado^ objEncargado);
		int  ObtenerCantidadEncargado();
		Encargado^ ObtenerEncargadoUnaPosicion(int posicion);
		void EliminarEncargado(int posicion);
		Encargado^ BuscarEncargadoxDNI(String^ DNI);
		Encargado^ BuscarEncargadoxNomrbe(String^ nombre);
		void GestorEncargado::GrabarArchivo();
		void GestorEncargado::CargarDesdeArchivo();

	};
}