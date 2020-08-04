#include "GestorProducto.h"

using namespace SistemaMiRestauranteController;
using namespace System::IO;


GestorProducto::GestorProducto() {

	this->listaProductos = gcnew List<Producto^>();
	//GestorProducto^ objGestorProducto = gcnew GestorProducto();

}
void	GestorProducto::EliminarProductoxOBJ(Producto^ objProducto) {

	this->listaProductos->Remove(objProducto);


}

void GestorProducto::AgregarProducto(Producto^ objProducto) {
	this->listaProductos->Add(objProducto);
}


int GestorProducto::ObtenerCantidadProducto() {
	return this->listaProductos->Count;
}

Producto^ GestorProducto::ObtenerProductoUnaPosicion(int posicion) {
	return this->listaProductos[posicion];
}

void GestorProducto::EliminarProducto(int posicion) {
	this->listaProductos->RemoveAt(posicion);
}
Producto^ GestorProducto::BuscarProductoxCogido(String^ codigo) {
	Producto^ objProductoBuscado;
	for (int i = 0; i < this->listaProductos->Count; i++) {
		if (this->listaProductos[i]->codigo == codigo) {
			objProductoBuscado = this->listaProductos[i];
		}
	}
	return objProductoBuscado;
}

Producto^ GestorProducto::BuscarProductoxNomrbe(String^ nombre) {
	Producto^ objProductoBuscado;
	for (int i = 0; i < this->listaProductos->Count; i++) {
		if (this->listaProductos[i]->nombre == nombre) {
			objProductoBuscado = this->listaProductos[i];
		}
	}
	return objProductoBuscado;
}

//Ya no es necesario , simplemente serializamos al cerrar la ventana mantProductos
/*void GestorProducto::GrabarArchivo()
{
	array<String^>^ lineas = gcnew array<String^>(this->listaProductos->Count);
	for (int i = 0; i < this->listaProductos->Count; i++)
	{
		Producto^ objProducto = this->listaProductos[i];
		String^ linea = objProducto->codigo + ";" + objProducto->nombre + ";" + objProducto->descripcion + ";" + objProducto->precio;
		lineas[i] = linea;
	}
	File::WriteAllLines("productos.txt", lineas);
}*/

void GestorProducto::CargarDesdeArchivo()
{
	this->listaProductos->Clear();
	array<String^>^ lineas = File::ReadAllLines("productos.txt");
	String^ separadores = ";";
	//De esta manera también recorremos el arreglo
	//listaDestinos = lineas[i], donde i es la posición del arreglo, en
	//este caso el i varia de forma implícita.
	for each(String^ lineasProductos in lineas)
	{
		array<String^>^ campos = lineasProductos->Split(separadores->ToCharArray());
		String^ codigo = campos[0];
		String^ nombre = campos[1];
		String^ descripcion = campos[2];
		String^ precio = campos[3];
		Producto^ objProducto = gcnew Producto(codigo, nombre, descripcion, precio);
		this->listaProductos->Add(objProducto);
	}
	
}
void GestorProducto::Serializar()
{
	Stream^ stream = File::Open("productos.bin", FileMode::Create);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	bin->Serialize(stream, this->listaProductos);
	stream->Close();

}
void GestorProducto::Deserializar()
{
	Stream^ stream = File::Open("productos.bin", FileMode::Open);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	this->listaProductos = dynamic_cast<List<Producto^>^>(bin->Deserialize(stream));
	stream->Close();
}

