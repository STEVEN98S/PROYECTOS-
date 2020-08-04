#pragma once
using namespace System::Drawing;
using namespace System;

namespace PaintModel {

	[Serializable]
	public ref class Figura
	{
	public:
		int inicioX;
		int inicioY;
		int finX;
		int finY;
		int tipo;
		Color objColor;

	public:
		Figura(int inicioX, int inicioY, int finX, int finY, int tipo, Color objColor);
	};
}