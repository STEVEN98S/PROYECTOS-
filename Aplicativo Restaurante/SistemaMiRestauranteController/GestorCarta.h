#pragma once

namespace SistemaMiRestauranteController
{
	using namespace System::Collections::Generic;
	using namespace SistemaMiRestauranteModel;
	using namespace System;
	using namespace System::IO;
	using namespace System::Runtime::Serialization::Formatters::Binary;
	using namespace System::Runtime::Serialization;
	public ref class GestorCarta
	{

	private:
		List<Carta^>^ listaCartas;

	public:
		GestorCarta();
		void AgregarProductoaListaCarta(Producto^ objProducto);
		void AgregarCarta(Carta^ objCarta);
		int  ObtenerCantidadCarta();
		Carta^ ObtenerCartaUnaPosicion(int posicion);
		void EliminarCarta(int posicion);
		List<Carta^>^ BuscardorCartas(String^ Estado);
//		void GestorCarta::GrabarArchivo();
		void GestorCarta::SerializeDetallesCarta(/*Carta^ objcarta*/);
	//	void GestorCarta::CargarDesdeArchivo();
		void GestorCarta::CargarCartaArchivo();
		//serializar
		void GestorCarta::Serializar();
		//deserializar
		void GestorCarta::Deserializar();

	};
}