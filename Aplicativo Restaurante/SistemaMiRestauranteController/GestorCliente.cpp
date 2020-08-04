#include "GestorCliente.h"

using namespace SistemaMiBusController;
using namespace System::IO;


GestorCliente::GestorCliente() {

	this->listaClientes = gcnew List<Cliente^>();
}

void GestorCliente::AgregarCliente(Cliente^ objCliente) {
	this->listaClientes->Add(objCliente);
}


int GestorCliente::ObtenerCantidadCliente() {
	return this->listaClientes->Count;
}

Cliente^ GestorCliente::ObtenerClienteUnaPosicion(int posicion) {
	return this->listaClientes[posicion];
}

void GestorCliente::EliminarCliente(int posicion) {
	this->listaClientes->RemoveAt(posicion);
}
Cliente^ GestorCliente::BuscarClientexDNI(String^ DNI) {
	Cliente^ objClienteBuscado;
	for (int i = 0; i < this->listaClientes->Count; i++) {
		if (this->listaClientes[i]->NumDNI == DNI) {
			objClienteBuscado = this->listaClientes[i];
		}
	}
	return objClienteBuscado;
}

Cliente^ GestorCliente::BuscarClientexNomrbe(String^ nombre) {
	Cliente^ objClienteBuscado;
	for (int i = 0; i < this->listaClientes->Count; i++) {
		if (this->listaClientes[i]->Nombre == nombre) {
			objClienteBuscado = this->listaClientes[i];
		}
	}
	return objClienteBuscado;
}


void GestorCliente::GrabarArchivo()
{
	array<String^>^ lineas = gcnew array<String^>(this->listaClientes->Count);
	for (int i = 0; i < this->listaClientes->Count; i++)
	{
		Cliente^ objCliente = this->listaClientes[i];
		String^ linea = objCliente->NroClienteFre + ";" + objCliente->Nombre + ";" + objCliente->ApellidoMaterno + ";" + objCliente->ApellidoPaterno + ";" + objCliente->NumDNI + ";" + objCliente->email + ";" + objCliente->Telefono + ";" + objCliente->Genero;
		lineas[i] = linea;
	}
	File::WriteAllLines("Clientes.txt", lineas);
}

void GestorCliente::CargarDesdeArchivo()
{
	this->listaClientes->Clear();
	array<String^>^ lineas = File::ReadAllLines("Cliente.txt");
	String^ separadores = ";";
	//De esta manera también recorremos el arreglo
	//listaDestinos = lineas[i], donde i es la posición del arreglo, en
	//este caso el i varia de forma implícita.
	for each(String^ lineasClientes in lineas)
	{
		array<String^>^ campos = lineasClientes->Split(separadores->ToCharArray());
		String^ NroClienteFre = campos[0];
		String^ Nombre = campos[1];
		String^ ApellidoMaterno = campos[2];
		String^ ApellidoPaterno = campos[3];
		String^ NumDNI = campos[4];
		String^ email = campos[5];
		String^ Telefono = campos[6];
		String^ Genero = campos[7];
		Cliente^ objCliente = gcnew	Cliente(NroClienteFre, Nombre, ApellidoMaterno, ApellidoPaterno, NumDNI, email, Telefono, Genero);

		this->listaClientes->Add(objCliente);
	}
}