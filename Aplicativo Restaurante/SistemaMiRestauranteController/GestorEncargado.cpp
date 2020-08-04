#include "GestorEncargado.h"

using namespace SistemaMiBusController;
using namespace System::IO;


GestorEncargado::GestorEncargado() {

	this->listaEncargados = gcnew List<Encargado^>();
}

void GestorEncargado::AgregarEncargado(Encargado^ objEncargado) {
	this->listaEncargados->Add(objEncargado);
}


int GestorEncargado::ObtenerCantidadEncargado() {
	return this->listaEncargados->Count;
}

Encargado^ GestorEncargado::ObtenerEncargadoUnaPosicion(int posicion) {
	return this->listaEncargados[posicion];
}

void GestorEncargado::EliminarEncargado(int posicion) {
	this->listaEncargados->RemoveAt(posicion);
}
Encargado^ GestorEncargado::BuscarEncargadoxDNI(String^ DNI) {
	Encargado^ objEncargadoBuscado;
	for (int i = 0; i < this->listaEncargados->Count; i++) {
		if (this->listaEncargados[i]->NumDNI == DNI) {
			objEncargadoBuscado = this->listaEncargados[i];
		}
	}
	return objEncargadoBuscado;
}

Encargado^ GestorEncargado::BuscarEncargadoxNomrbe(String^ nombre) {
	Encargado^ objEncargadoBuscado;
	for (int i = 0; i < this->listaEncargados->Count; i++) {
		if (this->listaEncargados[i]->Nombre == nombre) {
			objEncargadoBuscado = this->listaEncargados[i];
		}
	}
	return objEncargadoBuscado;
}


void GestorEncargado::GrabarArchivo()
{
	array<String^>^ lineas = gcnew array<String^>(this->listaEncargados->Count);
	for (int i = 0; i < this->listaEncargados->Count; i++)
	{
		Encargado^ objEncargado = this->listaEncargados[i];
		String^ linea = objEncargado->FechaIngreso + ";" + objEncargado->Nombre + ";" + objEncargado->ApellidoMaterno + ";" + objEncargado->ApellidoPaterno + ";" + objEncargado->NumDNI + ";" + objEncargado->email + ";" + objEncargado->Telefono + ";" + objEncargado->Genero;
		lineas[i] = linea;
	}
	File::WriteAllLines("Encargados.txt", lineas);
}

void GestorEncargado::CargarDesdeArchivo()
{
	this->listaEncargados->Clear();
	array<String^>^ lineas = File::ReadAllLines("Encargado.txt");
	String^ separadores = ";";
	//De esta manera también recorremos el arreglo
	//listaDestinos = lineas[i], donde i es la posición del arreglo, en
	//este caso el i varia de forma implícita.
	for each(String^ lineasEncargados in lineas)
	{
		array<String^>^ campos = lineasEncargados->Split(separadores->ToCharArray());
		String^ FechaIngreso = campos[0];
		String^ Nombre = campos[1];
		String^ ApellidoMaterno = campos[2];
		String^ ApellidoPaterno = campos[3];
		String^ NumDNI = campos[4];
		String^ email = campos[5];
		String^ Telefono = campos[6];
		String^ Genero = campos[7];
		Encargado^ objEncargado = gcnew	Encargado(FechaIngreso, Nombre, ApellidoMaterno, ApellidoPaterno, NumDNI, email, Telefono, Genero);

		this->listaEncargados->Add(objEncargado);
	}
}