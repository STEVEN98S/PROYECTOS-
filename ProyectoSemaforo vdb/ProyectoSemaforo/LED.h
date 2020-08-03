#pragma once
#include "Hardware.h"

namespace ProyectoSemaforoModel
{
	using namespace System;
	[Serializable]
	public ref class LED :public Hardware
	{
	public:
		String ^ color;
		int tiempo;
	public:
		LED(String^ color, int tiempo, int codigo, String^ tipo);
	};
}