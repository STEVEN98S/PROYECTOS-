
#include "Producto.h"

namespace SistemaMiRestauranteModel
{
	using namespace System;
	using namespace System::Collections::Generic;
	[Serializable]
	public ref class Carta
	{
	public:
		String^ codigo;
		String^ FechaValidez;
		String^ Nombre;
		String^ estado;

		List<Producto^>^ listaProductos;

	public:
		Carta(String^ codigo, String^ FechaValidez, String^ Nombre, String^ estado, List<Producto^>^ listaProductos);
	};
}