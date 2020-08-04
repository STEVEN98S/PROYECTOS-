#include "GestorFiguras.h"

using namespace PaintController;

GestorFiguras::GestorFiguras()
{
	this->listaFiguras = gcnew List<Figura^>();
}

void GestorFiguras::AgregarFigura(Figura^ objFigura)
{
	this->listaFiguras->Add(objFigura);
}

int GestorFiguras::ObtenerCantidadFiguras()
{
	return this->listaFiguras->Count;
}

Figura^ GestorFiguras::ObtenerFigura(int index)
{
	return this->listaFiguras[index];
}

void GestorFiguras::Serializar()
{
	Stream^ stream = File::Open("figuras.bin", FileMode::Create);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	bin->Serialize(stream, this->listaFiguras);
	stream->Close();
}

void GestorFiguras::Deserializar()
{
	Stream^ stream = File::Open("figuras.bin", FileMode::Open);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	this->listaFiguras = dynamic_cast<List<Figura^>^>(bin->Deserialize(stream));
	stream->Close();
}