#include "Cuadra.h"

using namespace ProyectoSemaforoModel;

Cuadra::Cuadra(int NumCuadra, String^ Jerarquia, Semaforo^ SemaforoCuadra, List<Carril^>^ ListaCarriles, Trafico^ TraficoCuadra)
{
	this->NumCuadra = NumCuadra;
	this->Jerarquia = Jerarquia;
	this->SemaforoCuadra = SemaforoCuadra;
	this->ListaCarriles = ListaCarriles;
	this->TraficoCuadra = TraficoCuadra;
}