namespace ProyectoSemaforoController
{
	using namespace ProyectoSemaforoModel;
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::Runtime::Serialization::Formatters::Binary;
	using namespace System::Runtime::Serialization;
	using namespace System::IO;
	[Serializable]
	public ref class GestorSemaforo
	{
	private:
		List<Semaforo^>^ ListaSemaforos;
	public:
		GestorSemaforo();
		void AgregarSemaforo(Semaforo^ NuevoSemaforo);
		int ObtenerCantSemaforos();
		Semaforo^ ObtenerSemaforo(int posicion);
		List<Semaforo^>^ BuscarSemaforosCuadra(String^ cuadra);
		void Eliminar(int posicion);
		void Serializar();
		void Deserializar();
	};
}