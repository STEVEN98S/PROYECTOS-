#include "GestorUbicacion.h"

using namespace SistemaMiBusController;
using namespace System::IO;


GestorUbicacion::GestorUbicacion() {

	this->listaUbicacion = gcnew List<Ubicacion^>();
}

void GestorUbicacion::AgregarUbicacion(Ubicacion^ objUbicacion) {
	this->listaUbicacion->Add(objUbicacion);
}


int GestorUbicacion::ObtenerCantidadUbicacion() {
	return this->listaUbicacion->Count;
}

Ubicacion^ GestorUbicacion::ObtenerUbicacionUnaPosicion(int posicion) {
	return this->listaUbicacion[posicion];
}

void GestorUbicacion::EliminarUbicacion(int posicion) {
	this->listaUbicacion->RemoveAt(posicion);
}
Ubicacion^ GestorUbicacion::BuscarUbicacionxDireccion(String^ direccion) {
	Ubicacion^ objUbicacionBuscado;
	for (int i = 0; i < this->listaUbicacion->Count; i++) {
		if (this->listaUbicacion[i]->direccion == direccion) {
			objUbicacionBuscado = this->listaUbicacion[i];
		}
	}
	return objUbicacionBuscado;
}

Ubicacion^ GestorUbicacion::BuscarUbicacionxCodigPostal(String^ codigoPostal) {
	Ubicacion^ objUbicacionBuscado;
	for (int i = 0; i < this->listaUbicacion->Count; i++) {
		if (this->listaUbicacion[i]->codigoPostal == codigoPostal) {
			objUbicacionBuscado = this->listaUbicacion[i];
		}
	}
	return objUbicacionBuscado;
}


void GestorUbicacion::GrabarArchivo()
{
	array<String^>^ lineas = gcnew array<String^>(this->listaUbicacion->Count);
	for (int i = 0; i < this->listaUbicacion->Count; i++)
	{
		Ubicacion^ objUbicacion = this->listaUbicacion[i];
		String^ linea = objUbicacion->direccion + ";" + objUbicacion->codigoPostal + ";" + objUbicacion->latitud + ";" + objUbicacion->longitud;
		lineas[i] = linea;
	}
	File::WriteAllLines("Ubicacion.txt", lineas);
}

void GestorUbicacion::CargarDesdeArchivo()
{
	this->listaUbicacion->Clear();
	array<String^>^ lineas = File::ReadAllLines("Ubicacion.txt");
	String^ separadores = ";";
	//De esta manera también recorremos el arreglo
	//listaDestinos = lineas[i], donde i es la posición del arreglo, en
	//este caso el i varia de forma implícita.
	for each(String^ lineasUbicacions in lineas)
	{
		array<String^>^ campos = lineasUbicacions->Split(separadores->ToCharArray());
		String^ direccion = campos[0];
		String^ codigoPostal = campos[1];
		String^ latitud = campos[2];
		String^ longitud = campos[3];
		Ubicacion^ objUbicacion = gcnew Ubicacion(direccion, codigoPostal, latitud, longitud);
		this->listaUbicacion->Add(objUbicacion);
	}
}