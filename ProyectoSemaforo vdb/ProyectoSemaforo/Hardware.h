#pragma once

namespace ProyectoSemaforoModel
{
	using namespace System;
	[Serializable]
	public ref class Hardware
	{
	public:
		int codigo;
		String^ tipo;
	public:
		Hardware(int codigo, String^ tipo);
	};
}