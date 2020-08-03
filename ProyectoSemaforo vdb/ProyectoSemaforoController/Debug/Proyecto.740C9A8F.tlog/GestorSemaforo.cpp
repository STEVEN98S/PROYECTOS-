#include "GestorSemaforo.h"
#include "GestorLED.h"

using namespace ProyectoSemaforoController;
using namespace System::IO;
using namespace System;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Runtime::Serialization;

GestorSemaforo::GestorSemaforo()
{
	ListaSemaforos = gcnew List<Semaforo^>();
}

void GestorSemaforo::AgregarSemaforo(Semaforo^ NuevoSemaforo)
{
	ListaSemaforos->Add(NuevoSemaforo);
}

int GestorSemaforo::ObtenerCantSemaforos()
{
	return ListaSemaforos->Count;
}

Semaforo^ GestorSemaforo::ObtenerSemaforo(int pos)
{
	return ListaSemaforos[pos];
}

List<Semaforo^>^ GestorSemaforo::BuscarSemaforosCuadra(String^ cuadra)
{
	List<Semaforo^>^ listaProductosBuscados = gcnew List<Semaforo^>();
	for (int i = 0; i < this->ListaSemaforos->Count; i++)
	{
		Semaforo^ objSemaforo = this->ListaSemaforos[i];
		if (objSemaforo->cuadra == cuadra)
		{
			listaProductosBuscados->Add(objSemaforo);
		}
	}
	return listaProductosBuscados;
}

void GestorSemaforo::Eliminar(int posicion)
{
	ListaSemaforos->RemoveAt(posicion);
}
void GestorSemaforo::Serializar()
{
	List<String^>^ listaSemaforoModificado = gcnew List<String^>();
	List<String^>^ listaRelacion = gcnew List<String^>();
	List<LED^>^ ListaLEDs = gcnew List<LED^>();
	for each (Semaforo^ objSemaforo in this->ListaSemaforos)
	{
		String^ codigoSemaforo = Convert::ToString(objSemaforo->codigo);
		String^ Cuadra = objSemaforo->cuadra;
		String^ SemaforoModificado = codigoSemaforo + ";" + Cuadra;
		listaSemaforoModificado->Add(SemaforoModificado);
		ListaLEDs = objSemaforo->ListaLEDs;
		for each (LED^ objLED in ListaLEDs)
		{
			String^ codigoLED = Convert::ToString(objLED->codigo);
			String^ Codigos = codigoSemaforo + ";" + codigoLED;
			listaRelacion->Add(Codigos);
		}
	}
	Stream^ stream1 = File::Open("Semaforos.bin", FileMode::Create);
	BinaryFormatter^ bin1 = gcnew BinaryFormatter();
	bin1->Serialize(stream1, listaSemaforoModificado);
	stream1->Close();
	Stream^ stream2 = File::Open("RelacionSemaforos.bin", FileMode::Create);
	BinaryFormatter^ bin2 = gcnew BinaryFormatter();
	bin2->Serialize(stream2, listaRelacion);
	stream2->Close();
}

void GestorSemaforo::Deserializar() {
	this->ListaSemaforos->Clear();
	List<String^>^ listaRelacion = gcnew List<String^>();
	List<String^>^ listaSemaforoModificado = gcnew List<String^>();
	GestorLED^ objGestorLED = gcnew GestorLED();
	if (System::IO::File::Exists("LEDs.bin")) {
		objGestorLED->Deserializar();
	}
	String^ separador = ";";
	Stream^ stream1 = File::Open("Semaforos.bin", FileMode::Open);
	BinaryFormatter^ bin1 = gcnew BinaryFormatter();
	listaSemaforoModificado = dynamic_cast<List<String^>^>(bin1->Deserialize(stream1));
	stream1->Close();
	Stream^ stream2 = File::Open("RelacionSemaforos.bin", FileMode::Open);
	BinaryFormatter^ bin2 = gcnew BinaryFormatter();
	listaRelacion = dynamic_cast<List<String^>^>(bin2->Deserialize(stream2));
	stream2->Close();
	for each (String^ LineaSemaforo in listaSemaforoModificado)
	{
		List<LED^>^ listaLEDs = gcnew List<LED^>();
		array<String^>^ campos1 = LineaSemaforo->Split(separador->ToCharArray());
		int codigo = Convert::ToInt32(campos1[0]);
		String^ Cuadra = campos1[1];
		for(int i = 0; i < objGestorLED->ObtenerCantLEDS(); i++)
		{
			LED^ objLED = objGestorLED->ObtenerLED(i);
			for each (String^ LineaRelacion in listaRelacion)
			{
				array<String^>^ campos2 = LineaRelacion->Split(separador->ToCharArray());
				int codigoSemaforo = Convert::ToInt32(campos2[0]);
				int codigoLED = Convert::ToInt32(campos2[1]);
				if (codigoSemaforo == codigo) {
					if (codigoLED == objLED->codigo) {
						listaLEDs->Add(objLED);
						break;
					}
				}
			}
		}
		Semaforo^ objSemaforo = gcnew Semaforo(codigo, Cuadra, listaLEDs);
		this->ListaSemaforos->Add(objSemaforo);
	}
}


