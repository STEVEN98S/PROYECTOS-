#pragma once

namespace SistemaMiBusController
{
	using namespace System::Collections::Generic;
	using namespace SistemaMiBusModel;
	using namespace System;

	public ref class GestorUbicacion
	{

	private:
		List<Ubicacion^>^ listaUbicacion;


	public:
		GestorUbicacion();
		void AgregarUbicacion(Ubicacion^ objUbicacion);
		int  ObtenerCantidadUbicacion();
		Ubicacion^ ObtenerUbicacionUnaPosicion(int posicion);
		void EliminarUbicacion(int posicion);
		Ubicacion^ BuscarUbicacionxDireccion(String^ direccion);
		Ubicacion^ BuscarUbicacionxCodigPostal(String^ codigoPostal);
		void GestorUbicacion::GrabarArchivo();
		void GestorUbicacion::CargarDesdeArchivo();

	};
}
