#include "GestorLED.h"

using namespace ProyectoSemaforoController;
using namespace System::IO;
using namespace System;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Runtime::Serialization;
using namespace System::Data::SqlClient;

GestorLED::GestorLED()
{
	ListaLEDs = gcnew List<LED^>();
	con = gcnew SqlConnection();

}

void GestorLED::AgregarLED(LED^ NuevoLED)
{
	ListaLEDs->Add(NuevoLED);
}

int GestorLED::ObtenerCantLEDS()
{
	return ListaLEDs->Count;
}

LED^ GestorLED::ObtenerLED(int posicion)
{
	return ListaLEDs[posicion];
}

LED^ GestorLED::BuscarLED(int codigo)
{
	LED^ x = nullptr;
	int i, cant;
	cant = ObtenerCantLEDS();
	for (i = 0; i < cant; i++)
	{
		if (ListaLEDs[i]->codigo == codigo)
		{
			x = ListaLEDs[i];
			break;
		}
	}
	return x;
}

void GestorLED::Eliminar(int posicion)
{
	ListaLEDs->RemoveAt(posicion);
}
void GestorLED::Serializar()
{
	Stream^ stream = File::Open("LEDs.bin", FileMode::Create);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	bin->Serialize(stream, this->ListaLEDs);
	stream->Close();
}

void GestorLED::Deserializar()
{
	Stream^ stream = File::Open("LEDs.bin", FileMode::Open);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	this->ListaLEDs = dynamic_cast<List<LED^>^>(bin->Deserialize(stream));
	stream->Close();
}
void GestorLED::abrirConexion() {
	String^ password = "dWThaU";
	this->con->ConnectionString = "Server=200.16.7.140;DataBase=inf237m33;"
		+ "User ID=inf237m33;Password=" + password + ";";
	//abrir la conexion
	this->con->Open();
}

void GestorLED::cerrarConexion() {
	this->con->Close();
}
void GestorLED::CargarLEDS() {
	ListaLEDs->Clear();
	SqlDataReader^ objLector = nullptr;
	try {
		abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = con;
		query->CommandText = "select * from LED;";
		objLector = query->ExecuteReader();
		while (objLector->Read())
		{
			int codigo = safe_cast<int>(objLector["Codigo"]);
			int tiempo = safe_cast<int>(objLector["Tiempo"]);
			String^ tipo = "indicador";
			String^ color = safe_cast<String^>(objLector["Color"]);
			LED^ objLed = gcnew LED(color, tiempo, codigo, tipo);
			ListaLEDs->Add(objLed);
		}
		objLector->Close();
		cerrarConexion();
	}
	catch (SqlException^ e) {
		if (objLector != nullptr)
			objLector->Close();
		cerrarConexion();
	}
}
