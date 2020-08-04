#include "Figura.h"

using namespace PaintModel;

Figura::Figura(int inicioX, int inicioY, int finX, int finY, int tipo, Color objColor)
{
	this->inicioX = inicioX;
	this->inicioY = inicioY;
	this->finX = finX;
	this->finY = finY;
	this->tipo = tipo;
	this->objColor = objColor;
}