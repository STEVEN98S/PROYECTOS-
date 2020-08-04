#pragma once

namespace SistemaMiBusModel
{
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Asiento
	{
	public:
		int codigo;
		int numero;
		String^ tipo;

	public:
		Asiento(int codigo, int numero, String^ tipo);
	};
}