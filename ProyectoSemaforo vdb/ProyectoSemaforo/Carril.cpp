#include "Carril.h"

using namespace ProyectoSemaforoModel;

Carril::Carril(String^ Sentido, int NumCarril)
{
	this->Sentido = Sentido;
	this->NumCarril = NumCarril;
}