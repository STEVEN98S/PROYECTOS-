#pragma once

namespace SistemaMiRestauranteController
{
	using namespace System::Collections::Generic;
	using namespace SistemaMiRestauranteModel;
	using namespace System;
	using namespace System::IO;
	using namespace System::Runtime::Serialization::Formatters::Binary;
	using namespace System::Runtime::Serialization;

	public ref class GestorProducto
	{

	private:
		List<Producto^>^ listaProductos;


	public:
		GestorProducto();
		void AgregarProducto(Producto^ objProducto);
		int  ObtenerCantidadProducto();
		Producto^ ObtenerProductoUnaPosicion(int posicion);
		void EliminarProducto(int posicion);
		void EliminarProductoxOBJ(Producto^ objProducto);

		Producto^ BuscarProductoxCogido(String^ codigo);
		Producto^ BuscarProductoxNomrbe(String^ nombre);
	//	void GestorProducto::GrabarArchivo();
		void GestorProducto::CargarDesdeArchivo();
		//serializar
		void GestorProducto::Serializar();
		//deserializar
		void GestorProducto::Deserializar();
	};
}