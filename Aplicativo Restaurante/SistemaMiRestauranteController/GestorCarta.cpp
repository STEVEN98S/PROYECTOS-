#include "GestorCarta.h"
#include "GestorProducto.h"

using namespace SistemaMiRestauranteController;
using namespace System::IO;


GestorCarta::GestorCarta() {
	this->listaCartas = gcnew List<Carta^>();
}
void GestorCarta::AgregarProductoaListaCarta(Producto^ objProducto) {
}
void GestorCarta::AgregarCarta(Carta^ objCarta) {
	this->listaCartas->Add(objCarta);
}
int GestorCarta::ObtenerCantidadCarta() {
	return this->listaCartas->Count;
}
Carta^ GestorCarta::ObtenerCartaUnaPosicion(int posicion) {
	return this->listaCartas[posicion];
}

//lista de cartas buscadas por estado/*
List<Carta^>^ GestorCarta::BuscardorCartas(String^ estado) {
	List<Carta^>^ listaCartasBuscadas = gcnew List<Carta^>();
	for (int i = 0; i < listaCartas->Count; i++)
	{
		Carta^ objCarta = this->listaCartas[i];
		if (objCarta->estado == estado)
		{
			listaCartasBuscadas->Add(objCarta);
		}

	}
	return listaCartasBuscadas;
}
void GestorCarta::EliminarCarta(int posicion) {
	this->listaCartas->RemoveAt(posicion);
}

void GestorCarta::Deserializar()
{
	Stream^ stream = File::Open("cartas.bin", FileMode::Open);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	this->listaCartas = dynamic_cast<List<Carta^>^>(bin->Deserialize(stream));
	stream->Close();
}
void GestorCarta::Serializar()
{
	Stream^ stream = File::Open("cartas.bin", FileMode::Create);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	bin->Serialize(stream, this->listaCartas);
	stream->Close();

}


void GestorCarta::SerializeDetallesCarta(/*Carta^ objcarta*/) {
	//EL CODIGO DE AQUI REVISA LA LISTA DE CARTAS Y LA CANTIDAD DE PRODUCTOS EN ELLAS , GENERANDO DESDE CERO EL ARCHIVO DETALLES TEXTO 
	int numeroFilasTotales = 0;
	int prodTotales = 0;
	for (int j = 0; j < this->listaCartas->Count; j++) 
	{
		Carta^ objCarta = this->listaCartas[j];
		numeroFilasTotales += objCarta->listaProductos->Count; // sumamos al numero de productos de la carta anterior con los de la nueva carta
	}
	//creamos el arreglo de filas totales
	array<String^>^ lineas = gcnew array<String^>(numeroFilasTotales);
	
	for (int i = 0; i < this->listaCartas->Count; i++){ // por cada carta
		Carta^ objCarta = this->listaCartas[i]; // escogemos una carta de la lista
		for (int j = 0; j < objCarta->listaProductos->Count; j++) // escribimos una cantidad de lineas de igual tamaño a la cant de productos
		{
			Producto^ objProducto = objCarta->listaProductos[j];
			String^ linea = objCarta->codigo + ";" + objProducto->codigo;
			lineas[prodTotales] = linea;
			prodTotales++;
		}

	}
	Stream^ stream = File::Open("detalles.bin", FileMode::Create);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	bin->Serialize(stream, lineas);
	stream->Close();

	//BinaryFormatter^ bin = gcnew BinaryFormatter();
	//lineas = dynamic_cast<array<String^>^>(bin->Deserialize(stream));
	//File::WriteAllLines("detalleCartas.txt", lineas);

	//EL CODIGO DE AQUI SOLO AGREAGA LOS DETALLES DE LA CARTA AGREGADA AL ARCHIVO TEXTO
	/*List<Producto^>^ listaProdCartaNueva = objcarta->listaProductos;
		array<String^>^ lineas = gcnew array<String^>(listaProdCartaNueva->Count);
	for (int i = 0; i < listaProdCartaNueva->Count; i++)
	{
		Producto^ objProducto = listaProdCartaNueva[i];
		String^ linea = objcarta->codigo + ";" + objProducto->codigo;
		lineas[i] = linea;
	}
	File::AppendAllLines("detalleCartas.txt", lineas);*/
	


}

//Mantenemos este CargarCartaArchivo para leer por primera vez el archivo cartas.txt
void GestorCarta::CargarCartaArchivo() {
	GestorProducto^ objGestorProducto = gcnew GestorProducto();
	objGestorProducto->Deserializar();
	this->listaCartas->Clear();
	array<String^>^ lineas = File::ReadAllLines("cartas.txt");
	String^ separadores = ";";
	for each(String^ lineasCartas in lineas) // por cada linea de txt carta
	{
		array<String^>^ campos = lineasCartas->Split(separadores->ToCharArray());

		String^ codigo = campos[0];
		String^ FechaValidez = campos[1];
		String^ Nombre = campos[2];
		String^ estado = campos[3];
		array<String^>^ lineasdetalles = File::ReadAllLines("detalleCartas.txt");

		List<Producto^>^ listaProductosCarta = gcnew List<Producto^>(); // agregamos una lista vacia por ahora a las cartas
		for each(String^ lineasProducto in lineasdetalles)
		{ // por cada linea de detalles carta
			array<String^>^ camposdetalles = lineasProducto->Split(separadores->ToCharArray());
			String^ codigocarta = camposdetalles[0];
			if (codigocarta == codigo) { // si el obj carta leido en el txt carta coincide con el de detalles carta 
				String^ codigoProducto = camposdetalles[1];
				Producto^ objProducto = objGestorProducto->BuscarProductoxCogido(codigoProducto);
				listaProductosCarta->Add(objProducto); // Añadimos el producto a la lista 
			}
		}

		Carta^ objCarta = gcnew Carta(codigo, FechaValidez, Nombre, estado, listaProductosCarta);
		this->listaCartas->Add(objCarta);
	}
}




// Grabar archivo inecesario , ahora serializamos al cerrar 
/*void GestorCarta::GrabarArchivo()	
{	
	array<String^>^ lineas = gcnew array<String^>(this->listaCartas->Count);
	for (int i = 0; i < this->listaCartas->Count; i++)
	{
		Carta^ objCarta = this->listaCartas[i];
		String^ linea = objCarta->codigo + ";" + objCarta->FechaValidez + ";" + objCarta->Nombre + ";" + objCarta->estado;
		lineas[i] = linea;
	}
	File::WriteAllLines("cartas.txt", lineas);
}*/


/*void GestorCarta::Deserializar()
{
	Stream^ stream = File::Open("cartas.bin", FileMode::Open);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	this->listaCartas = dynamic_cast<List<Carta^>^>(bin->Deserialize(stream));
	//stream->Close();

	GestorProducto^ objGestorProducto = gcnew GestorProducto();
	objGestorProducto->CargarDesdeArchivo();
	this->listaCartas->Clear();
	array<String^>^ lineas = File::ReadAllLines("cartas.txt");
	String^ separadores = ";";
	for each(String^ lineasCartas in lineas) // por cada linea de txt carta
	{
		array<String^>^ campos = lineasCartas->Split(separadores->ToCharArray());

		String^ codigo = campos[0];
		String^ FechaValidez = campos[1];
		String^ Nombre = campos[2];
		String^ estado = campos[3];
		array<String^>^ lineasdetalles = File::ReadAllLines("detalleCartas.txt");

		List<Producto^>^ listaProductosCarta = gcnew List<Producto^>(); // agregamos una lista vacia por ahora a las cartas
		for each(String^ lineasProducto in lineasdetalles)
		{ // por cada linea de detalles carta
			array<String^>^ camposdetalles = lineasProducto->Split(separadores->ToCharArray());
			String^ codigocarta = camposdetalles[0];
			if (codigocarta == codigo) { // si el obj carta leido en el txt carta coincide con el de detalles carta 
				String^ codigoProducto = camposdetalles[1];
				Producto^ objProducto = objGestorProducto->BuscarProductoxCogido(codigoProducto);
				listaProductosCarta->Add(objProducto); // Añadimos el producto a la lista 
			}
		}

		Carta^ objCarta = gcnew Carta(codigo, FechaValidez, Nombre, estado, listaProductosCarta);
		this->listaCartas->Add(objCarta);
	}
}*/



/*void GestorCarta::CargarDesdeArchivo()
{
	this->listaCartas->Clear();
	array<String^>^ lineas = File::ReadAllLines("cartas.txt");
	String^ separadores = ";";
	for each(String^ lineasCartas in lineas)
	{
		array<String^>^ campos = lineasCartas->Split(separadores->ToCharArray());
		String^ codigo = campos[0];
		String^ FechaValidez = campos[1];
		String^ Nombre = campos[2];
		String^ estado = campos[3];
		List<Producto^>^ listaProductos = gcnew List<Producto^>(); // agregamos una lista vacia por ahora a las cartas
		Carta^ objCarta = gcnew Carta(codigo, FechaValidez, Nombre, estado, listaProductos);
		this->listaCartas->Add(objCarta);
	}
}*/