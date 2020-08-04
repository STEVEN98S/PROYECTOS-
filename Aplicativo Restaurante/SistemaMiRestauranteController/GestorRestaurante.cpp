#include "GestorRestaurante.h"
#include "GestorUbicacion.h"

using namespace SistemaMiBusController;
using namespace System::IO;


GestorRestaurante::GestorRestaurante() {

	this->listaRestaurante = gcnew List<Restaurante^>();
}

void GestorRestaurante::AgregarRestaurante(Restaurante^ objRestaurante) {
	this->listaRestaurante->Add(objRestaurante);
}


int GestorRestaurante::ObtenerCantidadRestaurantes() {
	return this->listaRestaurante->Count;
}

Restaurante^ GestorRestaurante::ObtenerRestauranteUnaPosicion(int posicion) {
	return this->listaRestaurante[posicion];
}

void GestorRestaurante::EliminarRestaurante(int posicion) {
	this->listaRestaurante->RemoveAt(posicion);
}

List<Restaurante^>^ GestorRestaurante::BuscarRestaurantes(String^ codigo)
{
	List<Restaurante^>^ listaRestaurantesBuscados = gcnew List<Restaurante^>();
	for (int i = 0; i < this->listaRestaurante->Count; i++)
	{
		Restaurante^ objRestaurante = this->listaRestaurante[i];
		if (objRestaurante->codigo == codigo)
		{
			//Te encontré
			listaRestaurantesBuscados->Add(objRestaurante);
		}
	}
	return listaRestaurantesBuscados;
}


void GestorRestaurante::GrabarArchivo()
{
	array<String^>^ lineas = gcnew array<String^>(this->listaRestaurante->Count);
	for (int i = 0; i < this->listaRestaurante->Count; i++)
	{
		Restaurante^ objRestaurante = this->listaRestaurante[i];
		String^ linea = objRestaurante->codigo + ";" + objRestaurante->nombre + ";" + objRestaurante->telefono + ";" + objRestaurante->descripcion + ";" + objRestaurante->email;
		lineas[i] = linea;
	}
	File::WriteAllLines("productos.txt", lineas);
}

void GestorRestaurante::CargarDesdeArchivo()
{
	this->listaRestaurante->Clear();
	array<String^>^ lineas = File::ReadAllLines("restaurante.txt");
	String^ separadores = ";";
	GestorUbicacion^ objGestorUbicacion = gcnew GestorUbicacion();
	objGestorUbicacion->CargarDesdeArchivo();
	for each(String^ lineaRestaurante in lineas)
	{
		array<String^>^ campos = lineaRestaurante->Split(separadores->ToCharArray());
		String^ codigo = campos[0];
		String^  nombre= campos[1];
		String^ telefono = campos[2];
		String^ descripcion = campos[3];
		String^ email = campos[4];
		String^ codigoPostal =campos[5];
		Ubicacion^ objUbicacionRestaurante = objGestorUbicacion->BuscarUbicacionxCodigPostal(codigoPostal);
		Restaurante^ objRestaurante = gcnew Restaurante(codigo, nombre, telefono, descripcion, email, objUbicacionRestaurante);
		this->listaRestaurante->Add(objRestaurante);
	}
}
