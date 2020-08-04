#pragma once
#pragma once

namespace SistemaMiRestauranteModel
{
	using namespace System;
	[Serializable]
	public ref class Producto
	{
	public:
		String^ codigo;
		String^ nombre;
		String^ descripcion;
		String^ precio;

	public:
		Producto(String^ codigo, String^ nombre, String^ descripcion, String^ precio);
	};
}
