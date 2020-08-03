namespace ProyectoSemaforoController
{
	using namespace ProyectoSemaforoModel;
	using namespace System::Collections::Generic;
	using namespace System::Runtime::Serialization::Formatters::Binary;
	using namespace System::Runtime::Serialization;
	using namespace System::IO;
	using namespace System;
	using namespace System::Data::SqlClient;

	[Serializable]
	public ref class GestorLED
	{
	private:
		SqlConnection^ con;
		List<LED^>^ ListaLEDs;
	public:
		GestorLED();
		void CargarLEDS();
		void AgregarLED(LED^ NuevoLED);
		int ObtenerCantLEDS();
		LED^ ObtenerLED(int posicion);
		LED^ BuscarLED(int codigo);
		void Eliminar(int posicion);
		void Deserializar();
		void Serializar();
	private:
		void abrirConexion();
		void cerrarConexion();

	};
}